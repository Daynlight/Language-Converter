#include "PackageBuilder.h"

void LC::PackageBuilder::run(const std::string &path){
  config.load(path);

  modules.loadModules(config.getRecords());
};