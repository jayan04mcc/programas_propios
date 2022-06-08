#include <stdlib.h>
using namespace std;

class nodo{


private:
    int _numero;
public:
    nodo(){
    _numero=0;
    
    }
    nodo(int numero){
    _numero=numero;
    }
    int getnumero(){
        return _numero;
    }
    string imprimir(){
    
    cout<<"numero "<<_numero;
    return cout.str();
    }
    ~nodo(){
    }
};
