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

#include <vector>
#include <string>

namespace LC{
struct ConfigRecord{
  std::string ir;
  std::string debuilder;
  std::string builder;
  std::string out;
  
  std::vector<std::string> modules;
  std::vector<std::string> files;
};


class ConfigLoader{
private:
  std::vector<ConfigRecord> records;

public:
  void load(const std::string path);
  std::vector<ConfigRecord> getRecords();

  std::vector<LC::ConfigRecord>::iterator begin();
  std::vector<LC::ConfigRecord>::iterator end();
};
};