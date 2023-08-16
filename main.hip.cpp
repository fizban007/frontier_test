#include "lib.h"
#include <hip/hip_runtime.h>
#include <hip/hip_runtime_api.h>

using namespace Test;

__global__ void test_kernel() {
    auto v = f<float, 1>();
    printf("v is %f, a is %d\n", v, dev_a.n);
}

int main() {
    test_kernel<<<1, 1>>>();
    hipDeviceSynchronize();
    return 0;
}