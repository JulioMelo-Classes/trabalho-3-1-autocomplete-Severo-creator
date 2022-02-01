#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "../include/User.hpp"
#include "../include/World.hpp"
#include "../include/Answer.hpp"

using namespace std;

///*verifica se a pasta existe*///
bool pasta_existe(string str){
  ifstream dados(str);
  if(dados.bad()){
    cout << "Arquivo não existe" << endl;
     dados.close();
    return false;
  }else{
    if(str == "../data/cities.txt" || str == "../data/mundo.txt"){
      cout << "Arquivo encontrado" << endl;
       dados.close();
      return true;
    }else{
      cout << "Arquivo não compatível" << endl;
       dados.close();
      return false;
    }
  }
  dados.close();
  return false;
}

int main(){


  User *usuario = new User();
  World *wiki = new World();
  Answer *respostas = new Answer();
  string entrada;

  cout << "Usage: autocomplete:" << endl;
  
  cin >> entrada;
  cout << entrada << endl;
  if(pasta_existe(entrada)){
    cout << "open:" << endl;
    wiki->pasta(entrada);
    
  }else{
    return 0;
  }
  
  //Where <database_file> is the ascii file that contains the query terms and weights
  usuario->call_pasta(entrada, respostas, wiki);
  


}