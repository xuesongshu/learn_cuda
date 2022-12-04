#include "common.cuh"
#include <stdio.h>

extern "C" static __host__ __device__ void common_hello(int ichoice, int ithread_id)
{
    switch (ichoice)
    {
    case 1:
        printf("greet from A, thread%d\r\n", ithread_id);
        break;
    case 2:
        printf("greet from B, thread%d\r\n", ithread_id);
    default:
        break;
    }
}