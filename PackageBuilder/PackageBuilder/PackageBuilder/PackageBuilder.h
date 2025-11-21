// This project (including all shaders, tools, and source files) was created by the following contributors:
 
//   - LamaInPijama
//   - Daynlight
//   - Morekx0
//   - Vexinom
//   - pred

// As long as you retain this notice, you can do whatever you want with this
// software. If you ever meet any of the authors and think this work is worth it, you may buy them a beer (or equivalent beverage) in return.

// The authors do not provide any warranty. Use at your own risk.


#pragma once

#include "ConfigLoader/ConfigLoader.h"
#include "ModuleLoader/ModuleLoader.h"

#include <string>

namespace LC{
class PackageBuilder{
private:
  LC::ConfigLoader config;
  LC::ModuleLoader modules;
  
public:
  void run(const std::string &path);
};
};


