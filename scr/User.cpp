#include <string>
#include <iostream>
#include "User.hpp"
#include <iostream>
using namespace std;

User::User(){

}
///*inicio do programa*///
void User::call_pasta(string entrada, Answer* respostas, World* wiki){
  cout << "Call_pasta" << endl; 
  int a = 0;
  while( a != 1){
    cout << "Insira a palavre e aperte ENTER ou aperte ctrl + d para sair:" << endl;

    cin >> entrada;
  
    respostas->To_entrada(entrada, wiki->retorna_mundo());
  }
}