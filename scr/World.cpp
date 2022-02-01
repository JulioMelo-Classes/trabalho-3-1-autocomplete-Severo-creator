#include "../include/World.hpp"
#include <utility>
#include <string>
#include <fstream>
#include <math.h>
using namespace std;

 ///* Converte um string em um iteiro *///
long int converte(string str){
  long int conv = 0;
  int a = str.length() - 1; 
  conv = conv + (str[a] - '0');
  //cout<< (str[a]- '0') << endl;
  a--;
  for(int i = 1; i < str.length(); i++){
    conv = conv + ((str[a] - '0') * pow(10, i));
   // cout<< (str[a]- '0') << endl;
    a--; 
  }
  return conv;
}

World::World(/* args */){

}

///*  Salva todos os dados na classe World*///
void World::pasta(string str){
  string m_arquivo_palavras = str;
  cout << "opa:" << str << endl; 
  ifstream dados(m_arquivo_palavras, fstream::in);
  string q;
  dados >> q;
  cout << q << endl; 
  cout << "opa:" << endl; 
  int i = stoi(q);
  cout << i << endl; 
  pair<int, string> par;
  if(i == 10000){
    for(int i = 0; i < 10000; i ++){
      dados >> q;
      //cout << q << endl; 
      par.first = converte(q);
      dados >> q; 
     // cout << q << endl; 
      par.second = q;
      mundo.push_back(par);
    }
    dados.close();
    for(int i = 0; i < 10000; i ++){
      cout << mundo[i].first << " " << mundo[i].second << endl;
    }
    return;
  }else{
    //mundo = realloc(mundo, 10);
    dados >> q;
    par.first = converte(q);
    while(dados >> q){
      if(q[0] >= 48 && q[0]<= 57){
        mundo.push_back(par);
        par.first = converte(q);
        continue;
      }
      par.second.append(q);
    }
    dados.close();
    for(int i = 0; i < 10000; i ++){
      cout << mundo[i].first << " " << mundo[i].second << endl;
    }
  }
  
  return;
}

std::vector<std::pair<long int, std::string>> World::retorna_mundo(){
return mundo;
}