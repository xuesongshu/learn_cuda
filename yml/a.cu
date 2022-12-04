#include "a.hpp"
#include "common.cu"

extern "C" static __global__ void hello()
{
    common_hello(1, threadIdx.x * threadIdx.y + threadIdx.x);
}

void a_hello()
{
    hello<<<1, 2>>>();
    cudaDeviceSynchronize();
}