#ifndef PODER_H
#define PODER_H

#include <string>

using namespace std;

class poder{
  private:
    string nombre;
    int cantidadPoder;
  public:
    //Getters
    string getNombre();
    int getCantidadPoder();
    //Setters
    void setNombre(string);
    void setCantidadPoder(int);
    //Constructor y destructor
    poder(string,int); //Nombre, cantidad de poder
    virtual ~poder();
};

#endif
