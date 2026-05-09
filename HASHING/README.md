# HASHING

This folder contains hashing and map-based problem examples in C++.

## What is included

- Files such as `map.cpp`, `maxsubarr.cpp`, `rrmajorele.cpp`, and `arraysubsec.cpp`.
- Examples of using `std::unordered_map`, `std::map`, and frequency counting.
- Common problems with key-value lookup and fast membership tests.

## How to use

1. Open a file in this folder.
2. Study how hash tables are used to count elements or find duplicates.
3. Compile and run:
   ```bash
   g++ map.cpp -o map
   ./map
   ```

## Detailed explanation

Hashing is a technique for mapping data to a fixed-size table for fast access. In C++ the standard containers `unordered_map` and `map` are commonly used.

Key hashing ideas:

- Constant-time average lookup.
- Frequency counting for duplicate detection.
- Using keys to represent values or states.
- Fast membership testing in unsorted data.

Hashing is especially useful for problems involving frequency counts, pair sums, and duplicate detection.
