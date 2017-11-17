#include "earthbender.h"

//Getters
int earthbender::getColes(){
  return n_coles;
}
int earthbender::getGraduacion(){
  return graduacion;
}

//Setters
void earthbender::setColes(int pcoles){
  n_coles = pcoles;
}
void earthbender::setGraduacion(int pgraduacion){
  graduacion = pgraduacion;
}
//Constructor y destructor
earthbender::earthbender(string nombre,string nacion,int edad,char sexo,int pcoles,int pgraduacion):persona(nombre,nacion,edad,sexo){
  n_coles = pcoles;
  graduacion = pgraduacion;
}
earthbender::~earthbender(){}
