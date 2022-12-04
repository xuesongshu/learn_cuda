#pragma once

#include <cuda.h>
#include <cuda_runtime.h>
#include <device_launch_parameters.h>

__host__ __device__ void common_hello(int ichoice, int ithread_id);