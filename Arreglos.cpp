#include <iostream>
using namespace std;
int main()
{
    int flag;
    int num[5];
    cout<<"El programa pide 5 valores y los promedia\n";
    for (int ix=0; ix<5; ix++){
        cout << "Ingresa el valor "<<ix+1<<": ";
        cin >> num[ix];
    }
    cout<<"Posición  \t|";
    for (int ix=0; ix<5; ix++){
         cout<<ix<<"\t|";
    }
    cout<<endl;

    cout<<"Valor     \t|";
    for (int ix=0; ix<5; ix++){
         cout<<num[ix]<<"\t|";
    }
    cout<<endl;
    cout<<"¿Quieres cambiar el valor de algún elemento? (0 es No / 1 es Si): ";
    cin>>flag;
        if(flag == 1){
            int pos;
            cout<<"¿Qué elemento quieres cambiar? ";
            cin>>pos;
            cout<<"El valor a modificar es: "<<num[pos]<<endl;
            cout<<"Ingresa el nuevo valor: ";
            cin>>num[pos];
        }
        float acum=0, prom;
        for (int ix=0; ix<5; ix++){
            acum += num[ix];
        }
        prom = acum/5;
        cout<<"El promedio es: "<<prom<<endl;
}