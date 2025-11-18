#include "PackageBuilder/PackageBuilder.h"

int main(int argc, char* argv[]){
  LC::PackageBuilder builder;
  std::string path = "config"; 
  
  if(argc >= 2)
    path = argv[1];

#ifndef SILENT
  printf("config: %s\n", path.c_str());
#endif
  
  builder.run(path);

  return 0;
};