cmake_minimum_required(VERSION 3.15)

project(LanguageConverter LANGUAGES CXX)

set(src
  main.cpp
  LanguageBuilder/PackageBuilder/PackageBuilder.cpp
  LanguageBuilder/ModuleLoader/ModuleLoader.cpp
  LanguageBuilder/ConfigLoader/ConfigLoader.cpp
)


set(headers
  LanguageBuilder/
)

add_executable(LanguageConverter ${src})
target_include_directories(LanguageConverter PUBLIC ${headers})




add_subdirectory(Modules)