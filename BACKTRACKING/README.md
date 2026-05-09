# BACKTRACKING

This folder contains backtracking and recursive search examples in C++.

## What is included

- Recursive solutions that explore choices step by step.
- Problems that require exploring multiple possibilities and then returning to a previous state.
- Backtracking patterns for generating combinations, permutations, or valid paths.

## How to use

1. Open a file in this folder.
2. Read the recursion and rollback logic carefully.
3. Compile and run using a standard C++ compiler:
   ```bash
   g++ filename.cpp -o filename
   ./filename
   ```

## Detailed explanation

Backtracking is a problem-solving technique that uses recursion to explore all possible states and then returns (backtracks) when a state is invalid or complete. Common characteristics of backtracking:

- Decision tree: each level represents a choice.
- Recursion: the algorithm calls itself to make the next choice.
- Rollback: after exploring one branch, the algorithm restores state and tries another branch.
- Pruning: skip invalid or unnecessary branches early to save time.

Backtracking is useful for puzzles, combinations, permutations, constraint satisfaction, and pathfinding. Practicing these problems makes recursive thinking stronger and builds the foundation for algorithms like DFS and search-based optimization.
