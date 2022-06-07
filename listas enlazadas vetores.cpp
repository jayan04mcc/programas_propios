// program below illustrates the
// vector::insert() function

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // initialising the vector
    vector<int> vec = { 10, 20, 30, 40 };
    int n,val;

    // inserts 3 one time at front
    cout<<"cuantos valores desea ingresar"<<endl;
    cin>>val;
    for(int i=0;i<val;i++){
        cout<<"ingrese el num "<<i+1<<" a agregar"<<endl;
        cin>>n;
        auto it = vec.insert(vec.begin(),n);

    }

    // inserts 4 two times at front
    //vec.insert(it, 2, 4);

    cout << "The vector elements are: ";
    for (auto it = vec.begin(); it != vec.end(); ++it)
        cout << *it << " ";

    return 0;
}
