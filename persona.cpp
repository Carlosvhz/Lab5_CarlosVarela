#include "persona.h"
#include <string>
#include "poder.h"

using namespace std;

persona::persona(string pnombre, string pnacion, int pedad, char psexo){ //nombre,nacion,edad,sexo
  nombre = pnombre;
  lugar = pnacion;
  edad = pedad;
  sexo = psexo;
}

string persona::getNombre(){
  return nombre;
}

string persona::getNacion(){
  return lugar;
}

int persona::getEdad(){
  return edad;
}

char persona::getSexo(){
  return sexo;
}

//Setters
void persona::setNombre(string pnombre){
  nombre = pnombre;
}

void persona::setNacion(string pnacion){
  lugar = pnacion;
}

void persona::setEdad(int pedad){
  edad = pedad;
}

void persona::setSexo(char psexo){
  sexo = psexo;
}

persona::~persona(){}
