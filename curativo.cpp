#include "curativo.h"
#include <string>

using namespace std;

//Getters
string curativo::getTipo(){
  return tipo;
}
//Setters
void curativo::setTipo(string ptipo){
  tipo = ptipo;
}
//Constructor y destructor
curativo::curativo(string nombre,int nivel, string ptipo):poder(nombre,nivel){
  tipo = ptipo;
}
curativo::~curativo(){}
