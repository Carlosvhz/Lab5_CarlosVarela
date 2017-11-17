#include "invocacion.h"

//Getters
string invocacion::getNombre(){
  return nombre;
}

string invocacion::getEspecie(){
  return especie;
}

string invocacion::getHabilidad(){
  return habilidad;
}

//Setters
void invocacion::setNombre(string pnombre){
  nombre = pnombre;

}
void invocacion::setEspecie(string pesepecie){
  especie = pesepecie;
}

void invocacion::setHabilida(string phabilidad){
  habilidad = phabilidad;
}
//Constructor y destructor
invocacion::invocacion(string nombre,int nivel,string pnombre,string pespecie,string phabilidad):poder(nombre,nivel){
  nombre = pnombre;
  especie = pespecie;
  habilidad = phabilidad;
}

invocacion::~invocacion(){}
