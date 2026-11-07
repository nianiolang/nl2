# NianioLang language guide

This guide documents the NL2 language accepted by the compiler in this
repository. It is an implementation-oriented reference: every construct shown
here is derived from the parser, static checker, compiler, or executable test
suite rather than from a separate historical specification.

## 1. Source files and modules

NL source files use the `.nl` extension. The file name determines the module
name. A file named `invoice.nl` therefore defines module `invoice`.

Imports appear before function definitions:

```nl
use ptd;
use string;
```

An imported public function is called with its qualified name:

```nl
var text = ptd::int_to_string(42);
```

### Public and private functions

A qualified definition is public. Its module qualifier must match the source
file name:

```nl
# In invoice.nl
def invoice::total(items) {
	return sum_items(items);
}
```

An unqualified definition is private to its module:

```nl
def sum_items(items) {
	# ...
}
```

Public functions may be called as `invoice::total(...)`. Private functions are
called without a module qualifier and cannot be referenced from another
module.

`#` starts a comment that continues to the end of the line. Sequences such as
`###` are commonly used as decorative comment lines; they are not a separate
block-comment syntax.

## 2. Values and local variables

Declare a local with `var`. An initializer and a type annotation are both
optional:

```nl
var pending;
var count = 0;
var name : ptd::string() = 'Ada';
```

The core literal forms are:

```nl
var integer = 42;
var negative = -7;
var enabled = true;
var disabled = false;
var text = 'single quoted';
var quote = 'two single quotes make one: '' ';
var array = [1, 2, 3];
var record = {name => 'Ada', active => true};
var empty_hash = {};
```

Hash and record literals share the `{key => value}` syntax. Their static type
determines whether the value is an open hash or a record with a fixed set of
fields.

Strings use single quotes. Two adjacent quote characters inside a string
represent one literal quote.

A string may continue across physical lines by starting each continuation line
with another quote. The compiler inserts a line-feed between the pieces:

```nl
var text = 'first line
	'second line
	'third line';
```

## 3. Functions, return values, and references

Function arguments and return values may have type annotations:

```nl
def math::add(left : ptd::int(), right : ptd::int()) : ptd::int() {
	return left + right;
}
```

Annotations are optional. An annotated public signature is the clearest way to
define a stable module contract; unannotated positions retain the general
dynamic `ptd_im` type where the checker cannot derive something narrower.

Use `return;` for no value and `return expression;` for a value. A non-void
function must return on every reachable path. `die` is a terminating statement,
so a path ending in `die` does not fall through and does not need another
`return`.

### Reference parameters

`ref` marks a parameter that the function may update:

```nl
def increment(ref value : ptd::int()) : ptd::void() {
	value++;
}

def counter::next() : ptd::int() {
	var value = 0;
	increment(ref value);
	return value;
}
```

The call site must also write `ref`. The argument must be an assignable
location, such as a variable, record field, array element, or hash element:

```nl
increment(ref state->count);
increment(ref numbers[0]);
increment(ref values{key});
```

The explicit marker makes mutation visible at both ends of the call.

### Function values

`@module::function` creates a reference to a public function:

```nl
var callback = @worker::run;
```

Only public functions have this form. Library helpers such as `func::exec` and
`func::exec_ref` can execute function values.

## 4. Arrays, hashes, and records

Arrays are indexed with brackets and may be appended to with `[]=`:

```nl
var numbers = [10, 20];
numbers []= 30;
numbers[0]++;
```

Records use `->` with a field name:

```nl
var user = {name => 'Ada', visits => 1};
user->visits += 1;
```

Hashes use braces for a dynamic key. A bare identifier on the right side of
`->` is also convenient for a known string key:

```nl
var scores = {alice => 10};
var key = 'alice';
scores{key} += 5;
scores->alice += 1;
```

The compiler checks field and element types whenever the aggregate has a known
static type.

## 5. Variants and pattern matching

A variant is a named alternative, with or without a payload:

```nl
var empty = :none;
var value = :some(42);
```

Test a label with `is` and extract its payload with `as`:

```nl
if (value is :some) {
	var number = value as :some;
}
```

`as` assumes that the label is correct. Use `is` or `match` when that has not
already been established.

`match` destructures a variant:

```nl
match (result) case :ok(var value) {
	return value;
} case :err(var message) {
	die(message);
}
```

For a statically known variant type, the checker requires every alternative to
be handled, rejects repeated alternatives, and verifies whether each case has
the right payload shape.

Payloads of ordinary `ptd::var` variants are bound with `var`. Payloads of
`own::var` variants are bound with `ref`, which permits in-place mutation:

```nl
match (state) case :idle {
} case :running(ref count) {
	count++;
}
```

## 6. Static types

Type expressions use calls to the `ptd` and `own` modules. Import the relevant
module before using its constructors:

```nl
use ptd;
use own;
```

### Primitive and general types

| Type expression | Meaning |
| --- | --- |
| `ptd::int()` | Integer |
| `ptd::string()` | String |
| `ptd::bool()` | Boolean |
| `ptd::void()` | No return value; valid only as a function return type |
| `ptd::ptd_im()` | General dynamically represented value |

`ptd::none()` is not a standalone value type. It declares a variant alternative
that has no payload.

### Aggregate and variant types

```nl
ptd::arr(ptd::int())
ptd::hash(ptd::string())
ptd::rec({name => ptd::string(), age => ptd::int()})
ptd::var({none => ptd::none(), some => ptd::int()})
```

The corresponding owned forms are:

```nl
own::arr(ptd::int())
own::hash(ptd::string())
own::rec({value => ptd::int()})
own::var({idle => ptd::none(), running => ptd::int()})
```

The `ptd` family is the ordinary value-oriented aggregate family. The `own`
family marks an aggregate as owned and makes reference-sensitive operations
part of its static contract. In particular:

- an `own::hash` value iterator must be declared with `ref`;
- an `own::var` payload must be bound with `ref` in `match`;
- nested owned arrays, hashes, records, and variants may be updated in place.

Example:

```nl
def counters::counter_map_t() {
	return own::hash(ptd::int());
}

def counters::increment_all(ref counters : @counters::counter_map_t) : ptd::void() {
	forh var key, ref value (counters) {
		value++;
	}
}
```

### Named type descriptors

NL does not use a separate `type` declaration. The compiler recognizes a
function as a named type descriptor when it can statically parse the function
body as a type definition. Type descriptors intended for use across modules are
normally public and take no arguments:

```nl
def result::integer_result_t() {
	return ptd::var({
		ok => ptd::int(),
		err => ptd::string(),
	});
}
```

Refer to it with `@module::name`:

```nl
def result::double(input : @result::integer_result_t)
	: @result::integer_result_t {
	# ...
}
```

This recognition is deliberately structural and compile-time checked. A type
descriptor function must contain exactly one command: a `return` whose value is
built only from supported `ptd::*` or `own::*` type constructors, nested type
literals, and `@module::type` references. Arbitrary runtime computation is not
a type definition.

Consequently, a named type is trusted by the rest of the compiler only after
the compiler has parsed and validated that descriptor format. A normal function
that merely happens to return a descriptor-like runtime value is not a named
static type.

After successful type checking, the compiler does not emit a descriptor
function when the descriptor and all of its dependencies are needed only by
static annotations. An unused descriptor is still emitted, as is a descriptor
referenced by executable code. Dependencies of every emitted descriptor are
also emitted. This preserves the runtime meaning of `@module::type` while
allowing types that have been fully consumed by the checker to remain purely
compile-time declarations.

## 7. Control flow

### Conditions

```nl
if (count > 10) {
	return :large;
} elsif (count == 10) {
	return :exact;
} else {
	return :small;
}
```

Conditions have boolean type. The ternary expression is also available:

```nl
var sign = value >= 0 ? 'positive' : 'negative';
```

### Loops

NL supports several loop forms:

```nl
while (ready) {
	work();
}

loop {
	break if done();
}

for (var i = 0; i < 10; i++) {
	consume(i);
}

fora var item (items) {
	consume(item);
}

forh var key, var value (values) {
	consume_pair(key, value);
}

rep var i (10) {
	consume(i);
}
```

`break` exits the nearest loop and `continue` starts its next iteration.

For an owned hash, bind the value by reference:

```nl
forh var key, ref value (owned_values) {
	value++;
}
```

### Postfix statement modifiers

Simple statements may use `if`, `unless`, or `while` as postfix modifiers:

```nl
return value if ready;
die unless valid;
advance() while pending;
```

There are also postfix iterator forms:

```nl
consume(item) fora var item (items);
consume_pair(key, value) forh var key, var value (values);
consume(i) rep var i (10);
```

## 8. Result propagation with `try` and `ensure`

`try` and `ensure` consume a variant with `ok` and `err` alternatives. On
`ok`, they unwrap the payload. Their error behavior differs.

`try` propagates `err` by returning it from the current function:

```nl
def service::load_twice() : ptd::var({ok => ptd::int(), err => ptd::string()}) {
	try var value = service::load();
	return :ok(value * 2);
}
```

The enclosing function must itself return a compatible `ok`/`err` variant.
The `err` path terminates the current control-flow path; execution after `try`
continues only for `ok`.

`ensure` unwraps `ok`, but terminates with `die` on `err`:

```nl
ensure var value = service::load();
use_value(value);
```

It does not require the enclosing function to return a result variant.

Both keywords accept three forms:

```nl
try var value = expression;
try target = expression;
try expression;

ensure var value = expression;
ensure target = expression;
ensure expression;
```

The expression-only form checks or propagates the result and discards the `ok`
payload.

## 9. Termination with `die`

`die` always terminates the current path:

```nl
die;
die('invalid state');
die unless invariant_holds();
```

Arguments are permitted, but they do not turn `die` into a recoverable result.
For control-flow analysis, a branch ending in `die` never reaches the statement
after that branch.

## 10. Operators

The following table is ordered from tighter to looser binding. Postfix indexing,
hash access, and postfix increment/decrement bind as access operations.

| Group | Operators | Notes |
| --- | --- | --- |
| Postfix access and update | `[]`, `{}`, postfix `++`, postfix `--` | Array/hash access and update |
| Field access | `->` | Record or known hash field |
| Variant operations | `is :label`, `as :label` | Test or extract a variant |
| Function/type label | `@module::name` | Public function value or named type reference |
| Prefix update | `++`, `--` | Assignable operand required |
| Unary | `!`, unary `+`, unary `-` | Boolean negation or integer sign |
| Multiplicative | `*`, `/`, `%` | Integers |
| Additive | `+`, `-`, `.` | `.` concatenates string or integer operands as text |
| Ordered comparison | `<`, `<=`, `>`, `>=` | Integers |
| Equality | `==`, `!=`, `eq`, `ne` | `eq` and `ne` compare strings |
| Boolean AND | `&&` | Short-circuiting |
| Boolean OR | `||` | Short-circuiting |
| Conditional | `condition ? yes : no` | Right-associative |
| Assignment | `=`, `+=`, `-=`, `*=`, `/=`, `.=` | Right-associative |
| Array append | `[]=` | Assignment precedence; appends one element |

Pre- and post-increment/decrement are both supported:

```nl
++counter;
var previous = counter++;
```

## 11. Complete example

The repository includes
[`examples/language_tour.nl`](../examples/language_tour.nl), which combines a
named result type, an owned record, a reference parameter, `fora`, `try`, and
exhaustive `match` in one module.

Build the compiler and type-check the example with:

```sh
make
./mk_cache.exe nianio_lib examples --strict --o cache_example --js --O2
```

`--strict` makes parser and checker errors fail the compilation. The compiler
also supports C output by replacing `--js` with `--c`.
