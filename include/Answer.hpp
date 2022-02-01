#ifndef ANSWER_H
#define ANSWER_H

#include <iostream>
#include <vector>
#include <string>
#include <utility>

#include "World.hpp"

class Answer
{
private:
  std::vector<std::pair< int, std::string>> palavras;
  
public:
  Answer(/* args */);
  void To_entrada(std::string str, std::vector<std::pair<long int, std::string>> m);
};




#endif