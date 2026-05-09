# BANARY SEARCH

This folder contains binary search algorithm examples in C++.

> Note: The folder name is spelled `BANARY SEARCH`, but this topic is about binary search.

## What is included

- Numbered practice files such as `01.cpp`, `02.cpp`, `03.cpp`, and more.
- Examples of searching sorted arrays efficiently.
- Recursive and iterative binary search implementations.

## How to use

1. Open a file in this folder.
2. Study how the middle index is chosen and how the search range is updated.
3. Compile and run with:
   ```bash
   g++ 01.cpp -o 01
   ./01
   ```

## Detailed explanation

Binary search is an efficient search technique for sorted arrays. It reduces the search range by half each step, making its time complexity O(log n).

Key concepts:

- Sorted input: binary search only works correctly when the data is sorted.
- Midpoint selection: choose the middle element of the current range.
- Range update: if the target is smaller, search the left half; if larger, search the right half.
- Termination: the search ends when the target is found or the range becomes empty.

Binary search is essential for many advanced algorithms, and mastering it helps with problems involving sorted lists, search boundaries, and optimization.
