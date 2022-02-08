cmake_minimum_required(VERSION 3.5)

project(DrogonPostresBug LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(DrogonPostresBug
    PostgresHandler.h PostgresHandler.cpp
    main.cpp)

find_package(Drogon CONFIG REQUIRED)
find_package(PostgreSQL REQUIRED)

target_link_libraries(DrogonPostresBug PRIVATE Drogon::Drogon)
target_link_libraries(DrogonPostresBug PRIVATE PostgreSQL::PostgreSQL)

