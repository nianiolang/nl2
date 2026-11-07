# Nianio ASM coverage demo

Run from the repository root:

```sh
make demo_coverage
```

The first call takes only the short-circuit edge of `||`, so the report is
incomplete. The second call takes the other edge. `require(true)` also shows
that the opposite edge, which inevitably ends in `die`, is reported separately
and does not count as missing coverage. Finally,
`nlasm_coverage_assert_complete()` verifies 100% of all required commands and
branch outcomes.
