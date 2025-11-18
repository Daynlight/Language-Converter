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


