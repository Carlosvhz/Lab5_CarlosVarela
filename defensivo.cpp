#include "poder.h"

//Getters
int defensivo::getDuracion(){
  return duracion;
}

int defensivo::getResistencia(){
  return resistencia;
}

//Setters
void defensivo::setDuracion(int pduracion){
    duracion = pduracion;
}

void defensivo::setResistencia(int presistencia){
    resistencia = presistencia;
}

//Constructor y destructo
defensivo::defensivo(string pnombre,int nivel,int pduracion,int presistencia):poder(pnombre,nivel){
    duracion = pduracion;
    resistencia = presistencia;
}

defensivo::~defensivo(){}
