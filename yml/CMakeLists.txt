set(CMAKE_CUDA_FLAGS "-rdc=true -dlink")
file(GLOB YML_SRCS *.cu *.cpp)

add_executable(YML ${YML_SRCS})
set_target_properties(YML PROPERTIES CUDA_SEPARABLE_COMPILATION ON)