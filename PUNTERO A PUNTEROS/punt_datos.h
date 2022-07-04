#ifndef PUNT_DATOS_H_INCLUDED
#define PUNT_DATOS_H_INCLUDED
#include "datos.h"

class puntero_dat{
public:
    puntero_dat(){
        arreglo = new Datos*[50];
        indice=-1;
    }

    ~puntero_dat(){}
    void registrar(Datos *nuevoRegistro){
        indice++;
        arreglo[indice]=nuevoRegistro;
    }
    void eliminar_codigo(int cod){
        for(int i=0;i<indice;i++){

            if(arreglo[i]->GETcodigo()==cod){
                eliminar_por_posicion(i);
                i--;
            }
        }

    }
    void eliminar_por_posicion(int pos){
    for(int i=pos;i<=indice;i++){
       arreglo[i]=arreglo[i+1];

    }
    indice--;
    }
    Datos *devolver(int pos){
    return arreglo[pos];
    }
    int GETindice(){
    return indice;
    }
private:
    Datos** arreglo;
    int indice;

};


#endif // PUNT_DATOS_H_INCLUDED
