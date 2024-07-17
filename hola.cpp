#include <iostream>
using namespace std;

int main(){
    string nombre;
    cout<<"ingrese su nombre:  ";
    cin>>nombre;
    cout<<"hola mundo "<< nombre<<endl;
    cout<<"mostraremos la suma de dos numero basico"<<endl;
    int suma, a,b;
    cout<<"ingrese 1er numero:  ";
    cin>>a;
    cout<<"ingrese segundo numero:  ";
    cin>>b;
    suma = a + b;
    cout<<"la suma es:  "<<suma;
    return 0;
}
