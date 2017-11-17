#ifndef EARTHBENDER_H
#define EARTHBENDER_H

#include "persona.h"

class earthbender:public persona{
  private:
    int n_coles;
    int graduacion;

  public:
    //Getters
    int getColes();
    int getGraduacion();
    //Setters
    void setColes(int);
    void setGraduacion(int);
    //Constructor y destructor
    earthbender(string,string,int,char,int,int);
    ~earthbender();
};

#endif
