#include "area_y_perimetro.h"
#include <iostream>
using namespace std;
area_y_perimetro::area_y_perimetro(int _base,int _altura)
{
    base=_base;
    altura=_altura;
    //ctor
}

area_y_perimetro::~area_y_perimetro()
{
    //dtor
}
void area_y_perimetro::area(){
    int res1;
    res1=base*altura;

    cout<<"EL AREA DEL RECTANGULO ES "<<res1<<endl;

}
void area_y_perimetro::perimetro(){
    int res2;
    res2=(base+altura)*2;
    cout<<"EL PERIMETRO DEL RECTANGULO ES "<<res2<<endl;


}
