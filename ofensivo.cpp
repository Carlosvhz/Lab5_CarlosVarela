#include "ofensivo.h"
#include <string>

//Getters
int ofensivo::getRango(){
  return rango;
}

int ofensivo::getFuerza(){
  return fuerza;
}

//Setters
void ofensivo::setRango(int prango){
  rango = prango;
}

void ofensivo::setFuerza(int pfuerza){
  fuerza = pfuerza;
}

//Constructor y destructor
ofensivo::ofensivo(string pnombre, int nivelpoder ,int prango,int pfuerza):poder(pnombre,nivelpoder){
  rango = prango;
  fuerza = pfuerza;
}

ofensivo::~ofensivo(){}
