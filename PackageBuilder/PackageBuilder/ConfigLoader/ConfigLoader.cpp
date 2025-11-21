// This project (including all shaders, tools, and source files) was created by the following contributors:
 
//   - LamaInPijama
//   - Daynlight
//   - Morekx0
//   - Vexinom
//   - pred

// As long as you retain this notice, you can do whatever you want with this
// software. If you ever meet any of the authors and think this work is worth it, you may buy them a beer (or equivalent beverage) in return.

// The authors do not provide any warranty. Use at your own risk.


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
