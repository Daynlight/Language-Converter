cmake_minimum_required(VERSION 3.15)

project(LanguageConverter LANGUAGES CXX)

set(src
  main.cpp
  PackageBuilder/PackageBuilder.cpp
)


set(headers
  PackageBuilder/
)

add_executable(LanguageConverter ${src})
include_directories(LanguageConverter PUBLIC ${headers})

