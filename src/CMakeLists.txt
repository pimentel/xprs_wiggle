file(GLOB sources *.cpp)
file(GLOB headers *.h)

add_executable(xprs_wiggle ${sources} ${headers})
