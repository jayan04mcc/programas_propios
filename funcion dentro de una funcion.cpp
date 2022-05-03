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
        cout<<"no procede porq el num es impar";
    }

}


int main(){
int val;

//suma_impares(comprobar(valor(val)),valor(val));

cout<<"\t";
for(int i=1;i<=10;i++){
    cout<<i<<"\t";
}
cout<<endl<<endl;
for(int j=1;j<=10;j++){
    cout<<j<<"\n";

    cout<<"\t";
    for(int k=1;k<=10;k++){
        cout<<j*k<<"\t";
    }
    cout<<endl;
}


}
