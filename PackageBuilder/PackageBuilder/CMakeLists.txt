# This project (including all shaders, tools, and source files) was created by the following contributors:
 
#   - LamaInPijama
#   - Daynlight
#   - Morekx0
#   - Vexinom
#   - pred

# As long as you retain this notice, you can do whatever you want with this
# software. If you ever meet any of the authors and think this work is worth it, you may buy them a beer (or equivalent beverage) in return.

# The authors do not provide any warranty. Use at your own risk.


cmake_minimum_required(VERSION 3.15)

project(PackageBuilder LANGUAGES CXX)

set(src
  main.cpp
  PackageBuilder/PackageBuilder.cpp
  ModuleLoader/ModuleLoader.cpp
  ConfigLoader/ConfigLoader.cpp
)

set(libs
  fmt
)

set(headers
  . 
  ../vendor/
)

add_executable(PackageBuilder ${src})
target_include_directories(PackageBuilder PUBLIC ${headers})
target_link_libraries(PackageBuilder PUBLIC ${libs})


