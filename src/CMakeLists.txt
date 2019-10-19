cmake_minimum_required(VERSION 3.10)

project(radiance)

message("Web Assembly Compile")

file(GLOB bindings_SRC "bindings/*.h" "bindings/*.cpp")
file(GLOB radiance_SRC "common/*.h" "common/*.c")

set (CMAKE_CXX_STANDARD 14)

# we will eventually want the following warning flags on both compiles
# for now, just WASM
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wno-overloaded-virtual -Wno-switch -Wno-unknown-pragmas -Wno-unused-private-field")
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s ALLOW_MEMORY_GROWTH=1 --bind")

#set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3")

add_definitions(-D_GNU_SOURCE)
add_definitions(-DUNICODE)

set(CMAKE_EXECUTABLE_SUFFIX ".html")

add_executable(radiance ${bindings_SRC} ${radiance_SRC})

install(DIRECTORY DESTINATION "${CMAKE_CURRENT_SOURCE_DIR}/build/artifacts_js")
#install(FILES "build/javascript/radiance.js" DESTINATION "${CMAKE_CURRENT_SOURCE_DIR}/build/artifacts_js")
#install(FILES "build/javascript/radiance.wasm" DESTINATION "${CMAKE_CURRENT_SOURCE_DIR}/build/artifacts_js")
