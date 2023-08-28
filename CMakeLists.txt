cmake_minimum_required(VERSION 3.5)

project(cpprecipes LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(cpprecipes main.cpp)

include(GNUInstallDirs)
install(TARGETS cpprecipes
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
