#include <iostream>
#include "persona.h"
#include "airbender.h"
#include "firebender.h"
#include "waterbender.h"
#include "earthbender.h"
#include "nonbender.h"
#include "ofensivo.h"
#include "defensivo.h"
#include "curativo.h"
#include "invocacion.h"
#include <vector>
#include <fstream>
#include "poder.h"
using namespace std;

//Prototipo
void guardarArchivo(vector<persona*>);
vector<persona*> agregar(vector<persona*>);
vector<persona*> eliminar(vector<persona*>);

int main(){
  char resp;
  int op;
  vector<persona*> personas;
  do{
    cout<<"====== Lab#5 ======"<<endl;
    cout<<"1. Agregar"<<endl
        <<"2. Listar"<<endl
        <<"3. Eliminar"<<endl
        <<"4. Guardar en archivo"<<endl
        <<"Ingrese opcion: ";
    cin>>op;
    cout<<endl;
    switch(op){
      case 1:{
        personas = agregar(personas);
      }
      break;
      case 2:{
        cout<<"No lo hice :3 Lo siento <3 :'v"<<endl;
      }
      break;
      case 3:{
        personas = eliminar(personas);
      }
      case 4:{
        guardarArchivo(personas);
      }
      break;
      default:
        cout<<"   ¡No existe este ejercicio! "<<endl;
      break;
    }
    cout<<endl<<"¿Continuar?[s]: ";
    cin>>resp;
  }while(resp=='s');
  return 0;
}

//================ Funciones =================
vector<persona*> agregar(vector<persona*> lista){
  int numero,edad;
  char sexo;
  string nombre,nacion;
  //Poder
  int numeroPoder,cantidadFuerza;
  string nombrePoder;
  //=====================Agregar Maestro
  cout<<" ____ Agregar____ "<<endl
      <<"1. Agregar Air Bender "<<endl
      <<"2. Agregar Fire Bender "<<endl
      <<"3. Agregar Water Bender "<<endl
      <<"4. Agregar Earth Bender "<<endl
      <<"5. Agregar Non Bender "<<endl
      <<"Ingrese opcion: ";
  cin>>numero;
  while(numero<1||numero>5){
    cout<<"Ingrese un numero valido: ";
    cin>>numero;
  }
  cout<<"- Ingrese nombre: ";
  cin>>nombre;
  cout<<"- Ingrese nacionalidad: ";
  cin>>nacion;
  cout<<"- Ingrese edad: ";
  cin>>edad;
  cout<<"- Ingrese sexo[f/m]: ";
  cin>>sexo;
  //___________Poder_____________
  cout<<" == Tipo de poder == "<<endl
      <<"1. Tipo ofensivo "<<endl
      <<"2. Tipo defensivo "<<endl
      <<"3. Tipo curativo "<<endl
      <<"4. Tipo invocacion "<<endl
      <<"Ingrese opcion: ";
  cin>>numeroPoder;
  while(numeroPoder<0||numeroPoder>4){
    cout<<"= Ingrese de nuevo el numero: ";
    cin>>numeroPoder;
  }
  cout<<"Ingrese el nombre del poder: ";
  cin>>nombrePoder;
  cout<<"Ingrese la cantidad de poder: ";
  cin>>cantidadFuerza;
  cout<<endl;
  switch(numeroPoder){
    case 1:{
      int rango, fuerza;
      cout<<"___ Ofensivo ___"<<endl;
      cout<<"Ingrese el rango: ";
      cin>>rango;
      cout<<"Ingrese la fuerza: ";
      cin>>fuerza;
      poder* ponerPoder = new ofensivo(nombrePoder,cantidadFuerza,rango,fuerza);
    }
    break;
    case 2:{
      int resistencia, duracion;
      cout<<"___ Defensivos ___"<<endl;
      cout<<"Ingrese resistencia: ";
      cin>>resistencia;
      cout<<"Ingrese duracion: ";
      cin>>duracion;
      poder* ponerPoder = new defensivo(nombrePoder,cantidadFuerza,duracion,resistencia);
    }
    break;
    case 3:{
      int num;
      cout<<"___ Curativos ___"<<endl;
      cout<<"1. Golpes"<<endl
          <<"2. Cortadas"<<endl
          <<"3. Quemaduras"<<endl
          <<"Ingrese la opcion: ";
      cin>>num;
      while(num<1||num>3){
        cout<<"Ingrese de nuevo el numero: ";
        cin>>num;
      }
      if(num==1){
        poder* ponerPoder = new curativo(nombrePoder,cantidadFuerza,"Golpes");
      }else if(num==2){
        poder* ponerPoder = new curativo(nombrePoder,cantidadFuerza,"Cortadas");
      }else if(num==3){
        poder* ponerPoder = new curativo(nombrePoder,cantidadFuerza,"Quemaduras");
      }
    }
    break;
    case 4:{
      int op;
      string especie, nombre, habilidad;
      cout<<"___ Invocacion ___"<<endl;
      cout<<"Ingrese nombre: ";
      cin>>nombre;
      cout<<"Ingrese especie: ";
      cin>>especie;
      cout<<"Ingrese habilidad: ";
      cin>>habilidad;
      cout<<"1. Domestico "<<endl
          <<"2. Guerra "<<endl
          <<"Ingrese opcion: ";
      cin>>op;
      while(op<1||op>2){
        cout<<"Ingrese de nuevo el numero: ";
        cin>>op;
      }
      if(op==1){
        poder* ponerPoder = new invocacion(nombrePoder,cantidadFuerza,nombre,especie,"Domestico");
      }else if(op==2){
        poder* ponerPoder = new invocacion(nombrePoder,cantidadFuerza,nombre,especie,"Guerra");
      }
    }
    break;
  }
  //_________________________________
  switch(numero){
    case 1:{
      airbender* maestro;
      int cantidadPelo;
      string colorFlechas;
      cout<<"Ingrese cantidad de pelo: ";
      cin>>cantidadPelo;
      cout<<"Ingrese color de flechas: ";
      cin>>colorFlechas;
      maestro = new airbender(nombre,nacion,edad,sexo,cantidadPelo,colorFlechas);
      lista.push_back(maestro);  //nombre,nacion,edad,sexo,cantidadPelo,colorFlechas
    }
    break;
    case 2:{
      firebender* maestro;
      int cicatrices, victorias;
      cout<<"Ingrese cantidad de cicatrices: ";
      cin>>cicatrices;
      cout<<"Ingrese cantidad de victorias: ";
      cin>>victorias;
      maestro = new firebender(nombre,nacion,edad,sexo,cicatrices,victorias);
      lista.push_back(maestro);  //nombre,nacion,edad,sexo,victorias, cicatrices
    }
    break;
    case 3:{
      waterbender* maestro;
      string arma, tribu;
      cout<<"Ingrese el arma: ";
      cin>>arma;
      cout<<"Ingrese la tribu: ";
      cin>>tribu;
      maestro = new waterbender(nombre,nacion,edad,sexo,tribu,arma);
      lista.push_back(maestro);  //nombre,nacion,edad,sexo,tribu,arma
    }
    break;
    case 4:{
      earthbender* maestro;
      int coles, graduacion;
      cout<<"Ingrese cantidad de coles: ";
      cin>>coles;
      cout<<"Ingrese la graduacion de sus ojos: ";
      cin>>graduacion;
      maestro = new earthbender(nombre,nacion,edad,sexo,coles,graduacion);
      lista.push_back(maestro);  //nombre,nacion,edad,sexo,coles,graduacion
    }
    break;
    case 5:{
      nonbender* maestro;
      int fuerza, velocidad;
      string trabajo;
      cout<<"Ingrese el trabajo: ";
      cin>>trabajo;
      cout<<"Ingrese la fuerza: ";
      cin>>fuerza;
      cout<<"Ingrese la velocidad: ";
      cin>>velocidad;
      maestro = new nonbender(nombre,nacion,edad,sexo,trabajo,fuerza,velocidad);
      lista.push_back(maestro);  //nombre,nacion,edad,sexo,trabajo,fuerza,velocidad
    }
    break;
  }
  cout<<endl;
  return lista;
}

vector<persona*> eliminar(vector<persona*> lista){
  if(lista.size()!=0){
    int eliminar;
    cout<<"Hay "<<lista.size()<<" Elementos para eliminar del 0 - "<<lista.size()<<endl;
    cout<<"Ingrese el numero de elemento que quiera eliminar: ";
    cin>>eliminar;
    while(eliminar<0||eliminar>lista.size()-1){
      cout<<"= Ingrese de nuevo el numero: ";
      cin>>eliminar;
    }
    lista.erase(lista.begin()+eliminar);
  }else{
    cout<<"   ¡No hay elementos a eliminar! "<<endl;
  }
  return lista;
}

void guardarArchivo(vector<persona*> lista){
  ofstream archivo("DATOS.txt", ios::out);
  persona* p;
  for (int i = 0; i < lista.size(); i++) {
    cout<<"Archivo guardado :3"<<endl;
    p = lista.at(i);
    archivo<<"==========================="<<endl
           <<"Nombre: "<<p->getNombre()<<endl
           <<"Edad: "<<p->getEdad()<<endl
           <<"Nacionalidad: "<<p->getNacion()<<endl
           <<"Sexo: "<<p->getSexo()<<endl;
  }
  archivo.close();
}
