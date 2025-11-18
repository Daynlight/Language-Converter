#include "ModuleLoader.h"

void LC::ModuleLoader::loadModules(std::vector<LC::ConfigRecord> records){
  for(LC::ConfigRecord config_record : records){
    for(std::string module : config_record.modules){
      // loading modules
      // [NOTE] unordered_map to check if already loaded

#ifndef SILENT
      printf("module loaded: \n"
             "  ir: %s\n"
             "  debuilder: %s\n"
             "  builder: %s\n"
             "  module: %s\n",
             config_record.ir.c_str(),
             config_record.debuilder.c_str(),
             config_record.builder.c_str(),
             module.c_str());
#endif
    };
  };
};
