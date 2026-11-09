cmake_minimum_required(VERSION 3.16)

project(zaj4 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(zad1 zad1.cpp)
add_executable(zad2 zad2.cpp)
add_executable(zad3 zad3.cpp)

include(GNUInstallDirs)
install(TARGETS zad1
    TARGETS zad2
    TARGETS zad3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
