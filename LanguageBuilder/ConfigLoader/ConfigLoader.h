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