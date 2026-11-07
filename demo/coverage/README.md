# Nianio ASM coverage demo

Run from the repository root:

```sh
make demo_coverage
```

The first call takes only the short-circuit edge of `||`, so the report is
incomplete. The second call takes the other edge and
`nlasm_coverage_assert_complete()` verifies 100% command and branch coverage.
