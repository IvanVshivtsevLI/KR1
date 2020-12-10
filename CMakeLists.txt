cmake_minimum_required(VERSION 3.1)

project(KR1)

include_directories(${PROJECT_SOURCE_DIR})

set (KR1_SRC  main.cpp Autotest.cpp Operacii.cpp )
set (KR1_HDR  CIntNR.hpp Autotest.hpp )

add_executable (${PROJECT_NAME} ${KR1_SRC} ${KR1_HDR})