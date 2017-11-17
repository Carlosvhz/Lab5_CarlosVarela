#include "firebender.h"

//Getters
int firebender::getCicatrices(){
    return n_cicatrices;
}
int firebender::getVictorias(){
    return n_victorias;
}

//Setters
void firebender::setCicatrices(int cicatrices){
  n_cicatrices = cicatrices;
}
void firebender::setVictorias(int victorias){
  n_victorias = victorias;
}

//Constructor y destructor
firebender::firebender(string nombre,string nacion,int edad,char sexo,int cicatrices,int victorias):persona(nombre,nacion,edad,sexo){
  n_victorias = victorias;
  n_cicatrices = cicatrices;
} //nombre,nacion,edad,sexo,n_cicatrices,n_victorias

firebender::~firebender(){}
