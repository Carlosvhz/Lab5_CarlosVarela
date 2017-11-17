#ifndef CURATIVO_H
#define CURATIVO_H

#include <string>
#include "poder.h"

using namespace std;

class curativo:public poder{
  private:
    string tipo;
  public:
    //Getters
    string getTipo();
    //Setters
    void setTipo(string);
    //Constructor y destructor
    curativo(string,int,string);
    ~curativo();
};

#endif
