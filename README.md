# Demeter

Demeter<sup>1</sup> is a modern and open source deterministic neutron transport code for reactor simulations. The code is designed to perform 3D fixe source and eigenvalue calculations by solving the multi-group neutron transport equation.

The physics is coded in C++, with Python as user interface for easy and fast usage.

<sub>1. DEterMinistic nEutron Transport solvER</sub>

## Roadmap

- [x] Setup Cmake (overkill for now but usefull in the future).
- [x] Add and test Eigen.
- [x] Add AddressSanitizer, ThreadSanitizer, MemorySanitizer.
- [x] Setup Github Action.
- [x] Improve Github Action, by fixing OpenMP not found and with recent version of compiler and Eigen.
- [x] Setup directory structure => vector-of-bool/pitchfork.
- [x] Setup clang-format with Google style.
- [x] Setup clang-tidy.
- [x] Code Material and test in main.
- [x] Collect source and compile.
- [x] Fix how to launch clang-tidy locally and on action.
- [ ] Setup pybind11 and write a Python API.
- [ ] Write a python test for Material.
- [ ] Code Geometry.
  - [ ] Cell
  - [ ] PinCell
  - [ ] Lattice.
- [ ] Write a test for geometry.
- [ ] Code Solver.
- [ ] Setup gcc analizer.
- [ ] Write a first real but simple code.
- [ ] Talk about unit tests (use catch2, docstest or gtest).
- [ ] Peform cland-tidy in github action.
- [ ] Talk about doc style (eg doxygen) and the way to generate it automatically.
- [ ] Enable users to test the lib with codespace and notebooks.
- [ ] GPU offload.

## Requirements

- A C++ compiler compatible with at least version 17 of the standard, eg:
  - GCC 8 and later `apt install build-essential`,
  - Clang 5 and later `apt install clang libomp-dev clang-tidy clang-format`.
- CMake `apt install cmake`.
- Eigen `apt install libeigen3-dev`.

## Build and Run

```bash
mkdir build && cd build
cmake ..
make -j
```

or

```bash
cmake -B build
cmake --build build
```

Then try

```bash
./main
```

### Configure the build type: Debug or Release

```bash
cmake -S . -B build/ -D CMAKE_BUILD_TYPE=Debug
cmake --build build/ # build the binaries
```

### Choose a compiler

```bash
cmake -S . -B build/ -D CMAKE_CXX_COMPILER=clang++-18
```

### Append compiler flags

```bash
cmake -S . -B build/ -D CMAKE_CXX_FLAGS=-fsanitize=memory
```

## Troubleshooting

## Reference

## License
