#include "a.hpp"
#include "common.cuh"

__global__ void hello()
{
    common_hello(1);
}

void a_hello()
{
    hello<<<1, 2>>>();
    cudaDeviceSynchronize();
}