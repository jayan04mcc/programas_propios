#include <iostream>
using namespace std;
int main(){


   int mayor_1=0;
   int mayor_2=0;
    int n;
    cout<<"Valor de N: ";
    cin >> n;
    for (int i=0; i< n; i++){
        int num;
       cout<<"[1] Ingrese un valor: "<<i+1;
       cin >> num;
        if (num>mayor_1){
            mayor_2=mayor_1;
            mayor_1=num;
        }
        if (num>mayor_2 && num<mayor_1){
            mayor_2=num;
        }


    }


   cout<<"El mayor número que se puede obtener multiplicando "<<endl <<mayor_1<< mayor_2<< mayor_2*mayor_1;
   return 0;



}
