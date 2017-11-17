#ifndef DEFENSIVO_H
#define DEFENSIVO_H

#include "poder.h"

using namespace std;

class defensivo:public poder{
  private:
    int duracion;
    int resistencia;
  public:
    //Getters
    int getDuracion();
    int getResistencia();
    //Setters
    void setDuracion(int);
    void setResistencia(int);
    //Constructor y destructo
    defensivo(string,int,int,int);
    ~defensivo();
};

#endif
