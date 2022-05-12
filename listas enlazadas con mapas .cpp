#include <iostream>
#include <map>
using std::cout; using std::cin;
using std::endl; using std::map;
using std::string;
using std::array;

map<string,int> mapa1;

int main()
{
    mapa1["libro1"]=50;
    mapa1["libro2"]=70;
    mapa1["libro3"]=43;
    mapa1["libro4"]=25;
    int con;
        con=0;
        string nomb;
        int precio;
        bool senial=true;
        cout<<"desea agregar mas libros a la biblioteca? "<<endl;
        cout<<"1=si , 0=no"<<endl;
        cin>>senial;
        if (senial==true){
            while(con==0){
                string nombre;
                cout<<"ingrese el nombre y el precio del libro"<<endl;
                cin>>nombre;
                cout<<"PRECIO"<<endl;
                cin>>precio;
                mapa1.insert(std::pair<string,int>(nombre,precio));
                cout<<" si desea ingresar un nuevo libro digite -0-"<<endl;
                cin>>con;
            }
        }
        else{
        cout<<"se termino de ingresar los libros"<<endl;
        }
        bool senial2=true;
        cout<<"desea buscar un libro en la biblioteca?"<<endl;
        cin>>senial2;
        if (senial2==true){
            cout<<"ingrese el nombre del libro a buscar"<<endl;
            cin>>nomb;
            int val=mapa1[nomb];
            if (mapa1.find(nomb) == mapa1.end())
            {
            cout << "no se encuentra ese libro" << endl;
            }
            else
            {
            cout << "si existe ese libro." << endl;
            cout<<" y su precio es "<<val<<endl;
            }
        }
        map<string, int>::iterator iterador;
        for (iterador = mapa1.begin(); iterador != mapa1.end(); iterador++)
            {
                // "first" tiene la clave. "second" el valor
                string clave = iterador->first;
                int valor = iterador->second;
                cout << "el libro " << clave << " tiene el precio de :" << valor << "soles"<<endl;
            }


    return EXIT_SUCCESS;
}
