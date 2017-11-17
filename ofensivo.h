#ifndef OFENSIVO_H
#define OFENSIVO_H

#include "poder.h"
#include <string>

using namespace std;

class ofensivo:public poder{
  private:
    int rango;
    int fuerza;
  public:
    
    //Getters
    int getRango();
    int getFuerza();

    //Setters
    void setRango(int);
    void setFuerza(int);

    //Constructor y destructor
    ofensivo(string,int,int,int);
    ~ofensivo();
};

#endif
