cmake_minimum_required(VERSION 3.9.2)
project(Mars)

if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
    if (CMAKE_CXX_COMPILER_VERSION VERSION_LESS 7.2)
        message(FATAL_ERROR "Your GCC seems outdated. Go to https://github.com/AimTuxOfficial/AimTux/wiki/Updating-your-compiler for further instructions. If you have done so and still see this message, run 'git clean -fdx' and try again")
    endif()
else()
    message(FATAL_ERROR "You must have GCC >= 7.2 installed in order to compile Mars. Go to https://github.com/AimTuxOfficial/AimTux/wiki/Updating-your-compiler for further instructions.")
endif()

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O3 -g -std=c++17 -Wall -ldl -fpic -shared")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O3 -std=c++17 -w -ldl -fpic -shared")
#set(CMAKE_CXX_FLAGS_MINSIZEREL "${CMAKE_CXX_FLAGS_MINSIZEREL} -std=c++17 -Wall -Wno-maybe-uninitialized -Wno-unused-result -ldl -fpic -shared")

set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS}")

if(NOT CMAKE_BUILD_TYPE)
    message(STATUS "No build type selected, default to Release")
    set(CMAKE_BUILD_TYPE RELEASE)
endif(NOT CMAKE_BUILD_TYPE)

file(GLOB_RECURSE SOURCE_FILES "${CMAKE_SOURCE_DIR}/*.cpp")

add_library(Mars SHARED ${SOURCE_FILES})
target_link_libraries(Mars SDL2 GL dl xdo)
