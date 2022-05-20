#include <iostream>

using namespace std;
int valor(int val){
cout<<"ingrese un numero entre 0 y 100"<<endl;
cin>>val;
while(val<=0 or val>=100){
    cout<<"ingrese otro numero"<<endl;
    cin>>val;
}
cout<<"numero correcto"<<endl;
return val;


}
bool comprobar(int valor){

    if (valor%2==0){
        cout<<"es par"<<endl;
        return true;
    }
        cout<<"es impar"<<endl;
        return false;
}
void suma_impares(bool comprobar,int valor){
    if (comprobar == true){
            int sum=0;
        for(int i=1;i<=valor;i+=2){
            sum=sum+i;
        }
    cout<<sum;
    }
    else if(comprobar==false){
        cout<<"numero invalido";
    }

}


int main(){
int val;
int p1=valor(val);
bool p2=comprobar(p1);

suma_impares(p2,p1);


}
