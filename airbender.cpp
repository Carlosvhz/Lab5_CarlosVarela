#include "airbender.h"
#include <string>

using namespace std;

airbender::airbender(string pnombre, string pnacion, int pedad, char psexo, int pcantidadPelo, string colorFlechas)
                                                                        :persona(pnombre,pnacion,pedad,psexo){
  CanPelo = pcantidadPelo;                                                       //nombre,nacion,edad,sexo,cantidadPelo,colorFlechas
  colorFlechas = colorFlechas;
}
airbender::airbender(string pnombre, string pnacion, int pedad, char psexo, int pcantidadPelo, string colorFlechas, poder* po)
                                                                        :persona(pnombre,pnacion,pedad,psexo){
  CanPelo = pcantidadPelo;                                                       //nombre,nacion,edad,sexo,cantidadPelo,colorFlechas
  colorFlechas = colorFlechas;
  tipoPoder = po;
}

//Getters
int airbender::getCantidadPelo(){
  return CanPelo;
}

string airbender::getColorFlechas(){
  return colorFlechas;
}

//Setters
void airbender::setCantidadPelo(int pcantidadPelo){
  CanPelo = pcantidadPelo;
}

void airbender::setColorFlechas(string pcolor){
  colorFlechas = pcolor;
}

airbender::~airbender(){}
