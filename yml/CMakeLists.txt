set(CMAKE_CUDA_FLAGS "-rdc=true -dlink")

add_library(C-YML common.cu)
set_target_properties(C-YML PROPERTIES CUDA_SEPARABLE_COMPILATION ON)
add_executable(YML main.cpp a.cu b.cu)
add_dependencies(YML C-YML)
target_link_libraries(YML PRIVATE C-YML)
set_target_properties(YML PROPERTIES CUDA_SEPARABLE_COMPILATION ON)