#include "nonbender.h"
#include <string>

//Getters
string nonbender::getTrabajo(){
  return trabajo;
}
int nonbender::getFuerza(){
  return fuerza;
}
int nonbender::getVelocidad(){
  return velocidad;
}

//Setters
void nonbender::setTrabajo(string ptrabajo){
  trabajo = ptrabajo;
}
void nonbender::setFuerza(int pfuerza){
  fuerza = pfuerza;
}
void nonbender::setVelocidad(int pvelocidad){
  velocidad = pvelocidad;
}

//Constructor y destructor
nonbender::nonbender(string nombre,string nacion,int edad,char sexo,string ptrabajo,int pfuerza, int pvelocidad):persona(nombre,nacion,edad,sexo){
  trabajo = ptrabajo;
  fuerza = pfuerza;
  velocidad = pvelocidad;
}
nonbender::~nonbender(){}
