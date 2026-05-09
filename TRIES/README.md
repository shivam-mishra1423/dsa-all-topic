# TRIES

This folder contains trie data structure examples in C++.

## What is included

- Examples of prefix tree usage for string operations.
- Code for inserting and searching words by prefix.
- Practice with fast dictionary-style lookup.

## How to use

1. Open a file in this folder.
2. Study how nodes store child pointers and end-of-word flags.
3. Compile and run with:
   ```bash
   g++ filename.cpp -o tries
   ./tries
   ```

## Detailed explanation

A trie is a tree used to store strings one character at a time. Each node represents a character, and paths from the root form words.

Key trie ideas:

- Prefix-based lookup: find all words with a given prefix quickly.
- Efficient search: each character follows a child edge.
- Word termination markers to identify complete words.
- Useful for autocomplete, dictionaries, and word matching.

Tries are powerful when you need fast string retrieval based on prefixes.
