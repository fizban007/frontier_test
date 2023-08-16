#include "lib.h"

namespace Test {

__device__ __constant__ A<3> dev_a;

template <>
__device__ float f<float, 1>() {
    return 1.0f;
}

template <>
__device__ float f<float, 2>() {
    return 2.0f;
}

}