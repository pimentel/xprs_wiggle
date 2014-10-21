file(GLOB sources *.cpp)
file(GLOB headers *.h)

list(REMOVE_ITEM sources main.cpp)

add_library(xwcore ${sources} ${headers})

include_directories(${gff_SOURCE_DIR})

add_executable(xprs_wiggle main.cpp)

target_link_libraries(xprs_wiggle LINK_PUBLIC gff xwcore)
