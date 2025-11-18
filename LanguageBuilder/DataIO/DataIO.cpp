#include "DataIO.h"

LC::DataIO::DataIO(const std::string &path)
  :path(path) { load(); };

  LC::DataIO::~DataIO() {
}


char *LC::DataIO::get(){
  return buffer;
};

void LC::DataIO::load() {
  
};