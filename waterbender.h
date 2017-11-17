#ifndef WATERBEMDER_H
#define WATERBENDER_H

#include <string>
#include "persona.h"

using namespace std;

class waterbender:public persona{
  private:
    string tribu;
    string arma;
  public:
    //Gettes
    string getTribu();
    string getArma();
    //Setters
    void setTribu(string);
    void setArma(string);
    //Constructor y destructor
    waterbender(string,string,int,char,string,string); //nombre,nacion,edad,sexo,tribu,arma
    ~waterbender();
};

#endif
