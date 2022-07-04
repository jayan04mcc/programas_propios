#ifndef DATOS_H_INCLUDED
#define DATOS_H_INCLUDED
#include <iostream>
using namespace std;

class Datos
{
public:

    Datos(int precio,int codigo,int cantidad,string marca){
    this->cantidad=cantidad;
    this->codigo=codigo;
    this->marca=marca;
    this->precio=precio;

    }
    ~Datos(){}
    int GETprecio(){return precio;}
    int GETcodigo(){return codigo;}
    int GETcantidad(){return cantidad;}
    string GETmarca(){return marca;}
private:
    int precio;
    int codigo;
    int cantidad;
    string marca;

};


#endif // DATOS_H_INCLUDED
