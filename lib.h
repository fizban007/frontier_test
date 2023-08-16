#pragma once

namespace Test {

template <int N>
struct A {
  int n = N;
};

extern __device__ __constant__ A<3> dev_a;

template <typename T, int N>
__device__ T f();

}