cmake_minimum_required(VERSION 4.0)
project(BankSystemProject)

set(CMAKE_CXX_STANDARD 20)

add_executable(BankSystemProject main.cpp
        Person.h
        Client.h
)
