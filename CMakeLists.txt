cmake_minimum_required(VERSION 3.10)

project(SquareRootCalculator)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the main executable
add_executable(SquareRootCalculator src/main.cpp)

# Enable testing with CTest
enable_testing()

# Add the test executable
add_executable(test_square_root tests/cTest.cpp)

# Register the test with CTest
add_test(NAME SquareRootTest COMMAND test_square_root)