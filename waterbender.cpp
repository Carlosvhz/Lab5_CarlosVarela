#include "waterbender.h"

//Gettes
string waterbender::getTribu(){
  return tribu;
}
string waterbender::getArma(){
  return arma;
}
//Setters
void waterbender::setTribu(string ptribu){
  tribu = ptribu;
}
void waterbender::setArma(string parma){
  arma = parma;
}
//Constructor y destructor
waterbender::waterbender(string nombre,string nacion,int edad,char sexo,string ptribu,string parma):persona(nombre,nacion,edad,sexo){
  tribu = ptribu;
  arma = parma;
} //nombre,nacion,edad,sexo,tribu,arma

waterbender::~waterbender(){}
