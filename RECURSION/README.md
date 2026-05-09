# RECURSION

This folder contains recursion examples in C++.

## What is included

- Recursive functions that solve problems by calling themselves.
- Examples of problems that naturally fit a divide-and-conquer style.
- Strong practice for understanding base cases and recursive calls.

## How to use

1. Open a file in this folder.
2. Follow the recursive logic and base case definitions.
3. Compile and run with:
   ```bash
   g++ filename.cpp -o recursion
   ./recursion
   ```

## Detailed explanation

Recursion is a technique where a function solves a problem by solving smaller instances of the same problem. Every recursive solution has two parts:

- Base case: the simplest case that can be solved directly.
- Recursive case: the function calls itself with a smaller or simpler input.

Key recursion ideas:

- Reduce the problem size on each recursive call.
- Combine results from smaller problems.
- Avoid infinite recursion by always moving toward the base case.
- Use recursion carefully when deep call stacks could overflow.

Good recursion practice makes it easier to write clear solutions for tree traversal, combinatorics, and search problems.
