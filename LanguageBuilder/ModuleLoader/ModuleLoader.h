#pragma once

#include "ConfigLoader/ConfigLoader.h"

#include <vector>

namespace LC{
class ModuleLoader{
private:

public:
  void loadModules(std::vector<LC::ConfigRecord> records);


};
};
