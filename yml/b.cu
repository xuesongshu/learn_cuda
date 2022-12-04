#include "b.hpp"
#include "common.cuh"

extern "C" static __global__ void hello()
{
    common_hello(2, threadIdx.x * threadIdx.y + threadIdx.x);
}

void b_hello()
{
    hello<<<1, 2>>>();
    cudaDeviceSynchronize();
}