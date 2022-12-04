#include "b.hpp"
#include "common.cuh"

static __global__ void hello()
{
    common_hello(2, threadIdx.x * threadIdx.y + threadIdx.x);
}

void b_hello()
{
    hello<<<4, 4>>>();
    cudaDeviceSynchronize();
}