#include <iostream>
using namespace std;
//funciones
string analizarValor(int a, int b){
    if(a>b){
        return "El valor de a es mayor que b";
    }else if(a<b){
        return "El valor de a es menor que b";
    }else if(a==b){
        return "El valor de a es igual a b";
    }else{
        return "";
    }
}
//MAIN
int main(){
    int a,b;
    string msg;//mensaje a imprimir
    cout<<"Ingrese el valor de a:";
    cin>>a;
    cout<<"Ingrese el valor de b:";
    cin>>b;
    msg=analizarValor(a,b);
    cout<<msg<<endl;
    a+=2;
    msg=analizarValor(a,b);
    cout<<msg<<endl;


    return 0;
}
