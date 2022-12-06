#include "a.hpp"
#include "common.cuh"

static __global__ void hello()
{
    common_hello(1, blockIdx.x * blockDim.x + threadIdx.x);
}

void a_hello()
{
    hello<<<3, 3>>>();
    cudaDeviceSynchronize();
}