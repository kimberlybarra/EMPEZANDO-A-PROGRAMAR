#include <iostream>
using namespace std;

int main(){
    int sum, res, mul, div, num1, num2;
    cout<<"ingrese 1er numero:  ";
    cin>>num1;
    cout<<"ingrese 2do numero:  ";
    cin>>num2;
    sum = num1 + num2;
    cout<<"la suma es:  "<<sum<<endl;
    res = num1 - num2;
    cout<<"la resta es:  "<<res<<endl;
    mul = num1 * num2;
    cout<<"la multiplicacion es:  "<<mul<<endl;
    div = num1 / num2;
    cout<<"la divicionn es:  "<<div<<endl;

    return 0;
}