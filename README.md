# NianioLang 2

This repository contains the NL2 compiler, its standard library, native
runtimes, and compiler tests.

The language documentation is in the [NianioLang language guide](docs/language.md).
The guide describes the syntax and type rules implemented by this compiler,
including named type descriptors, `ptd` and `own` aggregates, variants,
references, and `try`/`ensure` control flow.

A small compilable module is available in
[examples/language_tour.nl](examples/language_tour.nl).

## Build

The default target bootstraps and builds the compiler:

```sh
make
```

Compile the example to JavaScript:

```sh
./mk_cache.exe nianio_lib examples --strict --o cache_example --js --O2
```

Replace `--js` with `--c` to generate C.

## Test

Run the complete test suite:

```sh
make test
```

Run the coverage-focused suite, including the compiler-core 100% gate:

```sh
make test_coverage
```

Run the coverage demo:

```sh
make demo_coverage
```
