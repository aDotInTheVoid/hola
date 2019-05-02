cmake_minimum_required(VERSION 3.0)
include(CheckIncludeFile)
include(CheckFunctionExists)
project(hola)
set_property(TARGET hola PROPERTY C_STANDARD 99)
check_include_file(stdio.h HAVE_STDIO_H)
if(NOT HAVE_STDIO_H)
    message("FATAL: stdio.h not found")
endif()

check_include_file(string.h HAVE_STRING_H)
if(NOT HAVE_STRING_H)
    message(SEND_ERROR "string.h not found")
endif()

add_executable(hola src/main.c)

