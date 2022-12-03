#include "b.hpp"
#include "common.cuh"

__global__ void hello()
{
    common_hello(2);
}

void b_hello()
{
    hello<<<1, 2>>>();
    cudaDeviceSynchronize();
}