cmake_minimum_required(VERSION 3.13)
project(aiplusplus
        VERSION 1.0.0
        DESCRIPTION "Lightweight library for machine learning in C++"
        LANGUAGES CXX )

include(GNUInstallDirs)

include(${PROJECT_SOURCE_DIR}/cmake/conan.cmake)

add_library(${PROJECT_NAME}
        src/distance.hpp
        src/distance.cpp
        src/distance.inl
        inc/aiplusplus.hpp)

set_target_properties(${PROJECT_NAME} PROPERTIES
        VERSION ${PROJECT_VERSION}
        SOVERSION 1
        PUBLIC_HEADER inc/aiplusplus.hpp)


target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_20)
target_link_libraries(${PROJECT_NAME} PUBLIC ${CONAN_LIBS})

enable_testing()
add_subdirectory(test)

install(TARGETS ${PROJECT_NAME}
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})