#ifndef PERSONA_H
#define PERSONA_H

#include <string>

using namespace std;

class persona{

  private:
    string nombre;
    string lugar;
    int edad;
    char sexo;

  public:
    virtual ~persona();
    //Getters
    string getNombre();
    string getNacion();
    int getEdad();
    char getSexo();
    //Setters
    void setNombre(string);
    void setNacion(string);
    void setEdad(int);
    void setSexo(char);
    //Constructor
    persona(string,string,int,char); //nombre,nacion,edad,sexo
};

#endif
