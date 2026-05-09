# DP

This folder contains dynamic programming examples in C++.

## What is included

- Classic DP problems like Fibonacci and sequence-based optimizations.
- Files such as `dp.cpp`, `fib.cpp`, `selectionsort.cpp`, and `mds.cpp`.
- Examples that show both memoization and bottom-up techniques.

## How to use

1. Open a file in this folder.
2. Identify repeated subproblems and overlapping structure.
3. Compile and run:
   ```bash
   g++ dp.cpp -o dp
   ./dp
   ```

## Detailed explanation

Dynamic programming solves problems by breaking them into smaller subproblems and reusing intermediate results. It is useful when a recursive solution repeats the same work.

Key DP ideas:

- Overlapping subproblems: the same subproblem appears multiple times.
- Optimal substructure: the best solution can be built from best solutions of subproblems.
- Memoization: store results of recursive calls.
- Tabulation: fill a table from smallest cases up to the final answer.

Practicing DP improves the ability to convert slow recursive logic into efficient, polynomial-time solutions.
