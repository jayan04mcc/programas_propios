#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int numero,val;
   srand(time(NULL));
   numero=1+rand()%(101-1);

   cout<<"estoy pensado en un numero entre el 1 y e l00"<<endl;
   cout<<"puedes adivinar este numero?";
   cout<<"este numero es"<<endl;
   cin>>val;
   while(val!=numero){
    cout<<"intentalo de nuevo"<<endl;
    cin>>val;
   }
   cout<<"lo lograste!!!";

}
