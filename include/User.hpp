#ifndef USER_H
#define USER_H

#include <iostream>
#include <vector>
#include <string>

#include "Answer.hpp"
#include "World.hpp"
class User
{
private:
  std::vector<std::string> entrada;
  std::vector<std::string> possiveis_entradas;
  
public:
  User();
  void call_pasta(std::string str, Answer* respostas, World* wiki);
};



#endif