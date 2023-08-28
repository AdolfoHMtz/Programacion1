#include <iostream>
using namespace std;
//Adolfo Huerta Martínez//
//Programa 1 Programacion I //
//Declaracion de las variables//
void menu();
float areaCir();
float areaRect();
float areaTriRect();
float perimCuad();
float perimRomb();
float perimIsoce();

// Main y switch del menú//
int main(){
    menu();
    int opc;
    cin>>opc;
    switch(opc) {
        case 1:
            areaCir();
            break;
        case 2:
            areaRect();
            break;
        case 3:
            areaTriRect();
            break;
        case 4:
            perimCuad();
            break;
        case 5: 
            perimRomb();
            break;
        case 6:
            perimIsoce();
            break;
        default:
            cout<<"La opcion que ingresaste no existe, escoge una de las 6 opciones";
            break;
    }
    return 0;
}
//Menu de opciones disponibles//
void menu() {
    cout<<"-----Ingresa el numero del calculo que quieres realizar-----"<<endl;
    cout<<"\t1) Calcular el area del Circulo"<<endl;
    cout<<"\t2) Calcular el area del Rectangulo"<<endl;
    cout<<"\t3) Calcular el area del Triangulo Rectangulo"<<endl;
    cout<<"\t4) Calcular el perimetro del Cuadrado"<<endl;
    cout<<"\t5) Calcular el perimetro del Romboide"<<endl;
    cout<<"\t6) Calcular el perimetro del Triangulo Isoceles"<<endl;
}
//Calculo de area del circulo//
float areaCir() {
    float radio;
    cout<<"Ingresa la medida del radio: ";
    cin>>radio;
    float area = 3.1416*radio*radio;
    cout<<"El area del circulo es de: "<<area<<endl;
    return area;
}
//Calculo de area del rectangulo//
float areaRect() {
    float ladoA, ladoB;
    cout<<"\tIngresa la medida del lado A: ";
    cin>>ladoA;
    cout<<"\tIngresa la medida del lado B: ";
    cin>>ladoB;
    float area=ladoA*ladoB;
    cout<<"\tEl area del Rectangulo es de: "<<area<<endl;
    return area;
}
//Calculo de area del Triangulo Rectangulo//
float areaTriRect() {
    float base, alt;
    cout<<"\tIngresa la base del Triangulo Rectangulo: ";
    cin>>base;
    cout<<"\tIngresa la altura del Triangulo Rectangulo: ";
    cin>>alt;
    float area=(base*alt)/2;
    cout<<"\tEl area del Triangulo Rectangulo es de: " <<area<<endl;
    return area;
}
//Calculo de perimetro del Cuadrado//
float perimCuad() {
    float lado;
    cout<<"\tIngresa la medida del lado del cuadrado: ";
    cin>>lado;
    float perimetro = lado*4;
    cout<<"\tEl perimetro del Cuadrado es de: "<<perimetro<<endl;
    return perimetro;
 }
//Calculo de perimetro del Romboide//
float perimRomb(){
    float ladoA,ladoB;
    cout<<"\tIngresa la medida del lado A: ";
    cin>>ladoA;
    cout<<"\tIngresa la medida del lado B: ";
    cin>>ladoB;
    float perimetro=(ladoA*2)+(ladoB*2); 
    cout<<"\tEl perimetro del Romboide es de: "<<perimetro<<endl;
    return perimetro;
}
//Calculo de perimetro del Triangulo Isoceles//
float perimIsoce(){
    float ladoA,ladoB,ladoC;
    cout<<"\tIngresa la medida del lado A: ";
    cin>>ladoA;
    cout<<"\tIngresa la medida del lado B: ";
    cin>>ladoB;
    cout<<"\tIngresa la medida del lado C: ";
    cin>>ladoC;
    float perimetro = ladoA+ladoB+ladoC; 
    cout<<"\tEl perimetro del Triangulo Isoceles es de: "<<perimetro<<endl;
    return perimetro;
}
