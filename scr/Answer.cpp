#include "../include/Answer.hpp"


using namespace std;
///* Converte um char minusculo em maiusculo*///
template<class ForwardIt>
char min(ForwardIt c){
  if( c >= 65 && c <= 90){
    c = c + 32;
  }
  return c;
}


Answer::Answer(/* args */){

}


///* salva na classe Answer todas as respostas possíveis e retorna elas*///
void Answer::To_entrada(string str, vector<std::pair<long int, std::string>> m){
  cout << "To_entrada" << endl; 
  
  
  for(auto i : m){
    int limit = i.second.length();
    int cont = 0, s = 0;
    for(auto h : str){
      if(min(h) == min(i.second[s])) {
        cont ++;
      }
      s++;
      if(s == limit)
        break;
    }
    if(cont == str.length()){
      palavras.push_back(i);
    }
  }

  for(auto i : palavras){
    cout << i.first << " " << i.second << endl;
  }
 return;
}