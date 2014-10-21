file(GLOB sources *.cpp)
file(GLOB headers *.h)

add_executable(xprs_wiggle ${sources} ${headers})

target_link_libraries(xprs_wiggle LINK_PUBLIC gff)
