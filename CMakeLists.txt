cmake_minimum_required(VERSION 3.0)

project(xprs_wiggle)

# add_compile_options(-Wall)
add_compile_options(-std=c++11)
add_compile_options(-Wdeprecated-register)

add_subdirectory(gff)
add_subdirectory(src)
