file(GLOB YHL_SRCS *.hpp *.cpp)

add_compile_definitions(_SILENCE_AMP_DEPRECATION_WARNINGS)
add_executable(YHL ${YHL_SRCS})