// This project (including all shaders, tools, and source files) was created by the following contributors:
 
//   - LamaInPijama
//   - Daynlight
//   - Morekx0
//   - Vexinom
//   - pred

// As long as you retain this notice, you can do whatever you want with this
// software. If you ever meet any of the authors and think this work is worth it, you may buy them a beer (or equivalent beverage) in return.

// The authors do not provide any warranty. Use at your own risk.


#include "ModuleLoader.h"

void LC::ModuleLoader::loadModules(std::vector<LC::ConfigRecord> records){
  for(LC::ConfigRecord config_record : records){
    for(std::string module : config_record.modules){
      // loading modules
      // [NOTE] unordered_map to check if already loaded

#ifndef SILENT
      fmt::print(fmt::fg(fmt::color::blue), "module loaded: \n"
             "  ir: {}\n"
             "  debuilder: {}\n"
             "  builder: {}\n"
             "  module: {}\n",
             config_record.ir.c_str(),
             config_record.debuilder.c_str(),
             config_record.builder.c_str(),
             module.c_str());
#endif
    };
  };
};
