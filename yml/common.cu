#include "common.cuh"
#include <stdio.h>

__device__ void common_hello(int ichoice)
{
    switch (ichoice)
    {
    case 1:
        printf("greet from A\r\n");
        break;
    case 2:
        printf("greet from B\r\n");
    default:
        break;
    }
}