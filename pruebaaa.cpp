#include <iostream>
#include "notas.h"
using namespace std;

int main()
{
    notas p1=notas("jayan",20204682,12,15,16);
    p1.mostrar_cui();
    return 0;
}
//*********************
#ifndef NOTAS_H
#define NOTAS_H
#include <string>
using namespace std;
class notas
{
private:
    string nombre;
    int cui;
    int nota1;
    int nota2;
    int nota3;

    public:
        notas(string,int,int,int,int);
        virtual ~notas();
        void mostrar_cui();
        void mostrar_nombre();
        void promedio();



};

#endif // NOTAS_H
//*********************************
#include "notas.h"
#include <iostream>
using namespace std;
notas::notas(string _nombre,int _cui,int _nota1,int _nota2,int _nota3){
cui=_cui;
nombre=_nombre;
nota1=_nota1;
nota2=_nota2;
nota3=_nota3;

}
{
    //ctor
}

notas::~notas()
{
    //dtor
}
void notas::mostrar_cui(){
    cout<<"EL CUI DEL ALUMNO ES "<<cui<<endl;
}
void notas::mostrar_nombre(){
    cout<<"EL NOMBRE COMPLETO DEL ALUMNO ES"<<nombre<<endl;

}
void notas::promedio(){
    float pro;
    pro=(nota1+nota2+nota3)/3;
    cout<<"EL PROMEDIO DE SUS NOTAS ES "<<pro<<endl;
    if (pro>=10.5){
        cout<<"EL ALUMNO APROBO EXITOSAMENTE"<<endl;
    }
    else
        cout<<"EL ALUMNO REPROBO"<<endl;


}
