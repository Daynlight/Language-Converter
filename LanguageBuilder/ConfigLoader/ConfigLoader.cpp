#include "ConfigLoader.h"

void LC::ConfigLoader::load(const std::string path) {
  LC::ConfigRecord record;
    record.ir = "v1.0.0",
    record.debuilder = "cpp";
    record.builder = "python";
    record.out = "Converted";
    record.modules = {"print"};

  records.emplace_back(record);
};

std::vector<LC::ConfigRecord> LC::ConfigLoader::getRecords(){
  return records;
};

std::vector<LC::ConfigRecord>::iterator LC::ConfigLoader::begin(){
  return records.begin();
};

std::vector<LC::ConfigRecord>::iterator LC::ConfigLoader::end(){
  return records.end();
};
