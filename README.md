# C++ Development Environment for Quick Start
* cmake
* google test
## Pre-requisites
* bash
* docker (for virtual development environment)
### VSCode
* Dev Containers extension: ms-vscode-remote.remote-containers

## Setup Development Environment
### Docker
1. Build docker container
```
    docker build -t linux-cpp .
```
2. Run docker container
```
    docker run -it --rm -v `pwd`:/work/cpp_sample --name linux-sample-container linux-cpp
```
3. Attach docker container
```
    docker exec -it linux-sample-container /bin/bash
```

## Build, Run, and Debug
### VSCode
1. Run cmake
    * VSCode - Terminal - Run Task - cmake: debug or cmake: release
2. Build
    * VSCode - Terminal - Run Task - build
3. Debug
    * VSCode - Start Debugging (F5)
4. Clean
    * VSCode - Terminal - Run Task - cmake: clean


## Code Quality Practices
### clang-format
```
    find . -name '*.cpp' -o -name '*.hpp' | xargs clang-format -i
```
### pre-commit
```
    pre-commit install  # for install pre-commit
    pre-commit uninstall # for uninstall pre-commit
```
