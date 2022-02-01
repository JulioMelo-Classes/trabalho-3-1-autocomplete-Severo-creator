#ifndef world_h
#define world_h

#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <fstream>

class World
{
private:
  std::string documento;
  std::vector<std::pair<long int, std::string>> mundo;
public:
  World(/* args */);
  void pasta(std::string str);
  std::vector<std::pair<long int, std::string>> retorna_mundo();
};

#endif
