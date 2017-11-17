#ifndef NONBENDER_H
#define NONBENDER_H

#include "persona.h"
#include <string>

using namespace std;

class nonbender: public persona{
  private:
    string trabajo;
    int fuerza, velocidad;
  public:
    //Getters
    string getTrabajo();
    int getFuerza();
    int getVelocidad();
    //Setters
    void setTrabajo(string);
    void setFuerza(int);
    void setVelocidad(int);
    //Constructor y destructor
    nonbender(string,string,int,char,string,int,int);
    ~nonbender();
};

#endif
