#ifndef INVOCACION_H
#define INVOCACION_H

#include <string>
#include "poder.h"

using namespace std;

class invocacion:public poder{
  private:
    string nombre;
    string especie;
    string habilidad;
  public:
    //Getters
    string getNombre();
    string getEspecie();
    string getHabilidad();
    //Setters
    void setNombre(string);
    void setEspecie(string);
    void setHabilida(string);
    //Constructor y destructor
    invocacion(string,int,string,string,string);
    ~invocacion();
};

#endif
