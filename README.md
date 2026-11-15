<div align="center">

# Sorting Algorithms Visualizer

**An interactive C++ / SDL2 study of classic sorting algorithms.**

![Language](https://img.shields.io/badge/language-C%2B%2B-00599C?logo=cplusplus&logoColor=white)
![Graphics](https://img.shields.io/badge/graphics-SDL2-1f6feb)
![Status](https://img.shields.io/badge/status-educational%20project-lightgrey)

</div>

## Overview

This repository explores how classic sorting algorithms transform an array through a graphical SDL2 visualization. The goal is to make the behavior of each algorithm easier to inspect while practicing C++, algorithm design, and rendering.

## Algorithms

| Algorithm | Implementation |
|---|---|
| Insertion Sort | [insertion_sort.cpp](insertion_sort.cpp) |
| Quick Sort | [quick_sort.cpp](quick_sort.cpp) |
| Selection Sort | [selection_sort.cpp](selection_sort.cpp) |

## Technology stack

- **C++** — algorithm implementation and application logic
- **SDL2** — graphical rendering and interaction

## Getting started

### Prerequisites

- A C++ compiler with C++ support
- SDL2 development libraries
- A Linux environment compatible with the included helper script

### Build

The repository includes a compilation helper:

```bash
chmod +x comp.sh
./comp.sh
```

Review the script before running it if your SDL2 installation uses non-standard paths.

### Run

Launch the executable produced by the build script. The exact output filename is determined by `comp.sh`.

## Repository layout

```text
.
├── insertion_sort.cpp
├── quick_sort.cpp
├── selection_sort.cpp
├── comp.sh
└── README.md
```

## Learning objectives

- Compare different sorting strategies
- Understand array traversal and element movement
- Practice C++ application structure
- Use SDL2 for real-time visualization

## Project status

This is an educational project. It is not intended to be a formally benchmarked sorting library.

## Contributing

Suggestions and improvements are welcome through GitHub issues or pull requests.

## License

No license file was identified in the repository at the time of writing. Contact the author before redistributing or reusing the project.
