set(CUDA_ARCHITECTURES all)
set(CUDA_SEPARABLE_COMPILATION ON)
# change compile option
# set(CMAKE_CUDA_FLAGS "-rdc=true -dlink")
file(GLOB YML_SRCS *.cu *.cpp)

add_executable(YML ${YML_SRCS})