#include <iostream>
using namespace std;
//Adolfo Huerta Martínez//
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
    cout<<"Ingresa el numero del calculo que quieres realizar"<<endl;
    cout<<"1) Calcular el area del Circulo"<<endl;
    cout<<"2) Calcular el area del Rectangulo"<<endl;
    cout<<"3) Calcular el area del Triangulo Rectangulo"<<endl;
    cout<<"4) Calcular el perimetro del Rectangulo"<<endl;
    cout<<"5) Calcular el perimetro del Romboide"<<endl;
    cout<<"6) Calcular el perimetro del Triangulo Isoceles"<<endl;
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
    cout<<"Ingresa la medida del lado A: ";
    cin>>ladoA;
    cout<<"Ingresa la medida del lado B: ";
    cin>>ladoB;
    float area=ladoA*ladoB;
    cout<<"El area del Rectangulo es de: "<<area<<endl;
    return area;
}
//Calculo de area del Triangulo Rectangulo//
float areaTriRect() {
    float base, alt;
    cout<<"Ingresa la base del triangulo: ";
    cin>>base;
    cout<<"Ingresa la altura del triangulo: ";
    cin>>alt;
    float area=(base*alt)/2;
    cout<<"El area del Triangulo Rectangulo es de: " <<area<<endl;
    return area;
}
//Calculo de perimetro del Cuadrado//
float perimCuad() {
    float lado;
    cout<<"Ingresa la medida del lado del cuadrado: ";
    cin>>lado;
    float perimetro = lado*4;
    cout<<"El perimetro del Cuadrado es de: "<<perimetro<<endl;
    return perimetro;
 }
//Calculo de perimetro del Romboide//
float perimRomb(){
    float ladoA,ladoB;
    cout<<"Ingresa la medida del lado A: ";
    cin>>ladoA;
    cout<<"Ingresa la medida del lado B: ";
    cin>>ladoB;
    float perimetro=(ladoA*2)+(ladoB*2); 
    cout<<"El perimetro del Romboide es de: "<<perimetro<<endl;
    return perimetro;
}
//Calculo de perimetro del Triangulo Isoceles//
float perimIsoce(){
    float ladoA,ladoB,ladoC;
    cout<<"Ingresa la medida del lado A: ";
    cin>>ladoA;
    cout<<"Ingresa la medida del lado B: ";
    cin>>ladoB;
    cout<<"Ingresa la medida del lado C: ";
    cin>>ladoC;
    float perimetro = ladoA+ladoB+ladoC; 
    cout<<"El perimetro del Triangulo Isoceles es de: "<<perimetro<<endl;
    return perimetro;
}