# HEAP

This folder contains heap and priority queue examples in C++.

## What is included

- Heap-based algorithms and priority queue usage.
- Files such as `01.cpp`, `02.cpp`, and priority queue examples.
- Examples of inserting, extracting, and ordering elements by priority.

## How to use

1. Open a file in this folder.
2. Study how `priority_queue` or heap operations are used.
3. Compile and run with:
   ```bash
   g++ 01.cpp -o 01
   ./01
   ```

## Detailed explanation

A heap is a binary tree-based data structure with a priority order. In C++, `std::priority_queue` provides a heap abstraction.

Key heap ideas:

- Max heap and min heap ordering.
- Fast extraction of the highest or lowest priority element.
- Efficient insertion and removal in O(log n).
- Use for scheduling, top-k problems, and sorting by priority.

Heaps are useful when you need to process elements in priority order quickly.
