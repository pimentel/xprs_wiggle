file(GLOB sources *.cpp)
file(GLOB headers *.h)

add_library(gff ${sources} ${headers})

target_include_directories(gff PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
