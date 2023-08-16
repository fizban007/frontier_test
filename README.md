This is a repo that reproduces a linking problem that I encountered on Frontier. To see the problem, do the following commands after cloning the repo:

````
source frontier
mkdir build && cd build
CXX=CC cmake ..
make
````

It will encounter an error during linking: `lld: error: undefined hidden symbol: float Test::f<float, 1>()`. However, if you compile the code naively using the following commands:

````
hipcc -fgpu-rdc -c lib.hip.cpp
hipcc -fgpu-rdc -c main.hip.cpp
hipcc --hip-link -fgpu-rdc lib.hip.o main.hip.o
./a.out
````

It compiles and runs ok. Must be something with the CMake detection and flag combination that leads to the above problem.
