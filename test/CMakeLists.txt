cmake_minimum_required(VERSION 3.13)

add_executable(unittest distance_test.cpp)
target_link_libraries(unittest PRIVATE aiplusplus)
target_include_directories(unittest PUBLIC ${PROJECT_SOURCE_DIR}/src)

add_test(NAME unittest COMMAND unittest)
