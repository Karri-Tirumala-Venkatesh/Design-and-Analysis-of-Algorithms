# 🧮 Design and Analysis of Algorithms

[![Language](https://img.shields.io/badge/Language-C%2B%2B%20%7C%20C-blue.svg)](https://github.com/Karri-Tirumala-Venkatesh/Design-and-Analysis-of-Algorithms)
[![License](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)
[![Stars](https://img.shields.io/github/stars/Karri-Tirumala-Venkatesh/Design-and-Analysis-of-Algorithms?style=social)](https://github.com/Karri-Tirumala-Venkatesh/Design-and-Analysis-of-Algorithms/stargazers)

A comprehensive collection of algorithm implementations developed during my undergraduate Design and Analysis of Algorithms (DAA) course. This repository serves as both a learning resource and a reference for fundamental algorithmic concepts across various problem-solving paradigms.

## 📚 Table of Contents

- [Introduction](#introduction)
- [Technologies Used](#technologies-used)
- [Algorithm Categories](#algorithm-categories)
  - [Sorting Algorithms](#sorting-algorithms)
  - [Searching Algorithms](#searching-algorithms)
  - [Greedy Algorithms](#greedy-algorithms)
  - [Dynamic Programming](#dynamic-programming)
  - [Graph Algorithms](#graph-algorithms)
  - [Backtracking](#backtracking)
  - [Divide and Conquer](#divide-and-conquer)
- [Usage Instructions](#usage-instructions)
- [Contributing](#contributing)
- [License](#license)
- [Contact](#contact)

## 🎯 Introduction

This repository contains implementations of classic algorithms studied in undergraduate computer science curricula. Each algorithm is implemented with clarity and efficiency in mind, featuring well-commented code and optimal time/space complexity considerations. The implementations cover fundamental algorithmic paradigms essential for competitive programming, technical interviews, and academic understanding.

## 💻 Technologies Used

- **C++**: Primary language for most implementations
- **C**: Used for specific algorithms requiring low-level operations
- **Compilers**: GCC, Clang, MSVC compatible
- **IDE**: Compatible with Visual Studio Code, Dev-C++, Code::Blocks

## 🔧 Algorithm Categories

### 🔄 Sorting Algorithms

| Algorithm | File | Time Complexity | Space Complexity | Description |
|-----------|------|----------------|------------------|-----------|
| **Bubble Sort** | [`bubble_sort.cpp`](bubble_sort.cpp) | O(n²) | O(1) | Simple comparison-based sorting with adjacent element swapping |
| **Insertion Sort** | [`insertion_sort.cpp`](insertion_sort.cpp) | O(n²) | O(1) | Builds sorted array one element at a time, efficient for small datasets |
| **Selection Sort** | [`selection_sort.cpp`](selection_sort.cpp) | O(n²) | O(1) | Finds minimum element and places it at the beginning |
| **Quick Sort** | [`quick_sort.cpp`](quick_sort.cpp) | O(n log n) | O(log n) | Efficient divide-and-conquer algorithm with pivot partitioning |
| **Merge Sort** | [`merge_sort.cpp`](merge_sort.cpp) | O(n log n) | O(n) | Stable divide-and-conquer algorithm with guaranteed performance |
| **Heap Sort** | [`heap_sort.cpp`](heap_sort.cpp) | O(n log n) | O(1) | Uses binary heap data structure for in-place sorting |
| **Radix Sort** | [`radix_sort.c`](radix_sort.c) | O(d×n) | O(n+k) | Non-comparison based sorting for integers |

### 🔍 Searching Algorithms

| Algorithm | File | Time Complexity | Space Complexity | Description |
|-----------|------|----------------|------------------|-----------|
| **Binary Search** | [`binary_search.c`](binary_search.c) | O(log n) | O(1) | Efficient search in sorted arrays using divide-and-conquer |
| **Linear Min/Max** | [`max_min_linear.c`](max_min_linear.c) | O(n) | O(1) | Linear approach to find minimum and maximum elements |

### 💡 Greedy Algorithms

| Algorithm | File | Time Complexity | Description |
|-----------|------|----------------|-----------|
| **Activity Selection** | [`activity_selection.cpp`](activity_selection.cpp) | O(n log n) | Selects maximum number of non-overlapping activities |
| **Fractional Knapsack** | [`fractional_knapsack.cpp`](fractional_knapsack.cpp) | O(n log n) | Optimizes value-to-weight ratio for maximum profit |
| **Job Scheduling** | [`job_scheduling_with_deadlines.cpp`](job_scheduling_with_deadlines.cpp) | O(n²) | Schedules jobs to minimize deadline violations |

### 🎯 Dynamic Programming

| Algorithm | File | Time Complexity | Description |
|-----------|------|----------------|-----------|
| **Fibonacci Sequence** | [`dp_fibonacci.cpp`](dp_fibonacci.cpp) | O(n) | Computes Fibonacci numbers using memoization |
| **Longest Common Subsequence** | [`lcs.cpp`](lcs.cpp) | O(m×n) | Finds longest subsequence common to two sequences |
| **Multistage Graph** | [`multi_stage_graph.cpp`](multi_stage_graph.cpp) | O(V×E) | Finds shortest path in multistage graphs |
| **Travelling Salesman** | [`tsp.cpp`](tsp.cpp) | O(n²×2ⁿ) | Solves TSP using dynamic programming with bitmasks |

### 🌐 Graph Algorithms

| Algorithm | File | Time Complexity | Description |
|-----------|------|----------------|-----------|
| **Dijkstra's Algorithm** | [`dijkstras.cpp`](dijkstras.cpp) | O((V+E) log V) | Single-source shortest path for weighted graphs |
| **Prim's Algorithm** | [`prims.cpp`](prims.cpp) | O(V²) | Finds minimum spanning tree using greedy approach |
| **Kruskal's Algorithm** | [`kruskal.c`](kruskal.c) | O(E log E) | MST algorithm using union-find data structure |

### 🔙 Backtracking

| Algorithm | File | Time Complexity | Description |
|-----------|------|----------------|-----------|
| **N-Queens Problem** | [`n-queens.cpp`](n-queens.cpp) | O(N!) | Places N queens on chessboard without conflicts |

### ⚡ Divide and Conquer

| Algorithm | File | Time Complexity | Description |
|-----------|------|----------------|-----------|
| **Min-Max Problem** | [`min_max_divide_and_conquer.cpp`](min_max_divide_and_conquer.cpp) | O(n) | Finds minimum and maximum using divide-and-conquer |

## 🚀 Usage Instructions

### Prerequisites
- GCC compiler (version 7.0 or higher)
- C++ Standard Library
- Make (optional, for automation)

### Compilation and Execution

#### For C++ files:
```bash
# Compile
g++ -o program_name filename.cpp

# Execute
./program_name
```

#### For C files:
```bash
# Compile
gcc -o program_name filename.c

# Execute
./program_name
```

#### Example:
```bash
# Compile Quick Sort
g++ -o quicksort quick_sort.cpp

# Run Quick Sort
./quicksort
```

### Input Format
Most programs accept input in the following format:
1. **Array size** (n)
2. **Array elements** (space-separated)

### Sample Usage
```bash
$ ./quicksort
Enter the number of elements: 5
Enter the elements: 64 34 25 12 22
Sorted array: 12 22 25 34 64
```

## 🤝 Contributing

Contributions are welcome! Please follow these guidelines:

1. **Fork** the repository
2. **Create** a feature branch (`git checkout -b feature/algorithm-name`)
3. **Commit** your changes (`git commit -am 'Add new algorithm'`)
4. **Push** to the branch (`git push origin feature/algorithm-name`)
5. **Create** a Pull Request

### Contribution Guidelines
- Follow consistent coding style and naming conventions
- Add comprehensive comments explaining algorithm logic
- Include time and space complexity analysis
- Test your implementation with various inputs
- Update documentation for new algorithms

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

```
MIT License

Copyright (c) 2025 Karri Tirumala Venkatesh

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.
```

## 📞 Contact

**Karri Tirumala Venkatesh**
- 📧 Email: [thektv3256@gmail.com](mailto:thektv3256@gmail.com)
- 🐙 GitHub: [@Karri-Tirumala-Venkatesh](https://github.com/Karri-Tirumala-Venkatesh)
- 💼 LinkedIn: [Karri Tirumala Venkatesh](https://linkedin.com/in/karri-tirumala-venkatesh)

---

### ⭐ Show Your Support

If you found this repository helpful, please consider giving it a star! It helps others discover these algorithm implementations.

**Happy Coding! 🎉**
