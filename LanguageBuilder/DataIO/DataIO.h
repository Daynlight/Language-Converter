#pragma once

#include <string>
#include <fstream>

#ifndef BUFFERSIZEDATAIO
#define BUFFERSIZEDATAIO 100
#endif

namespace LC{
class DataIO{
private:
  const std::string &path;
  char buffer[BUFFERSIZEDATAIO];

public:
  DataIO(const std::string &path);
  ~DataIO();

  char* get();
  void load();
};
};
