cmake_minimum_required(VERSION 3.10)
project(Byter)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)

enable_testing()
include_directories(include)
set(SOURCE_FILES src/Byter.cpp)
add_library(ByterLib ${SOURCE_FILES})

include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip
)

# Fetch and add Google Test to your build
FetchContent_MakeAvailable(googletest)

# Add unit tests
add_executable(ByterTests test/ByterTest.cpp)

# Link your library and Google Test to the test executable
target_link_libraries(ByterTests
  PRIVATE
    ByterLib
    gtest_main
)

# Discover tests
include(GoogleTest)
gtest_discover_tests(ByterTests)
