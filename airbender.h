#ifndef AIRBENDER_H
#define AIRBENDER_H

#include <string>
#include "persona.h"
//#include "poder.h"

using namespace std;

class airbender:public persona{

  private:
    int CanPelo;
    string colorFlechas;
    //poder tipoPoder;

  public:
      //Getters
      int getCantidadPelo();
      string getColorFlechas();

      //Setters
      void setCantidadPelo(int);
      void setColorFlechas(string);

      //constructor
      airbender(string,string,int,char,int,string); //nombre,nacion,edad,sexo,cantidadPelo,colorFlechas
      ~airbender();
};

#endif
