#include "poder.h"
#include <string>

using namespace std;

//Getters
string poder::getNombre(){
  return nombre;
}
int poder::getCantidadPoder(){
  return cantidadPoder;
}
//Setters
void poder::setNombre(string pnombre){
  nombre = pnombre;
}
void poder::setCantidadPoder(int cantidad){
  cantidadPoder = cantidad;
}
//Constructor y destructor
poder::poder(string pnombre,int pcantidad){
  nombre = pnombre;
  cantidadPoder = pcantidad;
}
poder::~poder(){}
