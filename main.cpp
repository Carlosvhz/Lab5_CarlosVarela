#include <iostream>
#include "persona.h"
#include <vector>

using namespace std;

//Prototipo
void guardarArchivo(persona*);
void agregar();
void set


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
    /*switch(op){
      case 1:
    }*/
    cout<<"¿Continuar?[s]: ";
    cin>>resp;
  }while(resp=='s');
  return 0;
}
