#include <iostream>
#include "punt_datos.h"
using namespace std;

int main()
{
    int opc,codigo_e;
    puntero_dat *objArr= new puntero_dat();
    Datos* nuevoRegistro;
    int precio;
    int codigo;
    int cantidad;
    string marca;
    do
    {
        cout<<" MENU "<<endl;
        cout<<" [1].registrar "<<endl;
        cout<<" [2].mostrar "<<endl;
        cout<<" [3].eliminar por codigo "<<endl;
        cout<<" [4].salir del programa "<<endl;
        cin>>opc;
        switch(opc)
        {
        case 1:
            cout<<"ingrese un codigo "<<endl;
            cin>>codigo;
            cout<<"ingrese un precio del producto "<<endl;
            cin>>precio;
            cout<<"ingrese la cantidad de productos que hay"<<endl;
            cin>>cantidad;
            cout<<"ingrese la marca del producto "<<endl;
            cin>>marca;
            nuevoRegistro= new Datos(precio,codigo,cantidad,marca);
            objArr->registrar(nuevoRegistro);
            break;

        case 2:
            cout<<"PRECIO\tCODIGO\tCANTIDAD\tMARCA"<<endl;
            for(int i=0;i<=objArr->GETindice();i++){
            cout<<objArr->devolver(i)->GETprecio()<<"  "<<objArr->devolver(i)->GETcodigo()<<"  "<<objArr->devolver(i)->GETcantidad()<<"  "<<objArr->devolver(i)->GETmarca()<<endl;

            }
            break;
        case 3:
            cout<<"ingrese el codigo a eliminar"<<endl;
            cin>>codigo_e;
            objArr->eliminar_codigo(codigo_e);
            break;

        default:
            break;
        }
    }while(!(opc==9));
    cin.ignore();
    cin.get();

    return 0;
}
