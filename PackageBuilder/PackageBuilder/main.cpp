// This project (including all shaders, tools, and source files) was created by the following contributors:
 
//   - LamaInPijama
//   - Daynlight
//   - Morekx0
//   - Vexinom
//   - pred

// As long as you retain this notice, you can do whatever you want with this
// software. If you ever meet any of the authors and think this work is worth it, you may buy them a beer (or equivalent beverage) in return.

// The authors do not provide any warranty. Use at your own risk.


#include "PackageBuilder/PackageBuilder.h"

#include <string>
#include <fmt/base.h>
#include <fmt/color.h>

int main(int argc, char* argv[]){
  LC::PackageBuilder builder;
  std::string path = "config.txt"; 
  
  if(argc >= 2)
    path = argv[1];

#ifndef SILENT
  fmt::print(fmt::fg(fmt::color::yellow), "config: {}\n", path.c_str());
#endif
  
  builder.run(path);

  return 0;
};