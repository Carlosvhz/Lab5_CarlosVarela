#ifndef FIREBENDER_H
#define FIREBENDER_H

#include "persona.h"

class firebender: public persona{
  private:
    int n_cicatrices;
    int n_victorias;

  public:
    //Getters
    int getCicatrices();
    int getVictorias();
    //Setters
    void setCicatrices(int);
    void setVictorias(int);
    //Constructor y destructor
    firebender(string,string,int,char,int,int); //nombre,nacion,edad,sexo,n_cicatrices,n_victorias
    ~firebender();
};

#endif
