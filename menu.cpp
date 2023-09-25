#include <iostream>
using namespace std;

int menuP();
int menuA(int cuenta);
int menuB(int cuenta);
int menuPo(int cuenta);

int main(){
    int opc, cuenta=0;
    do{
        opc=menuP();
        switch(opc)
        {
        case 1:
            cuenta=menuA(cuenta);
        break;
        case 2:
            cuenta=menuB(cuenta);
        break;
        case 3:
            cuenta=menuPo(cuenta);
        break;
        default:
            break;
        }
    }while(opc!=4);
    cout<<"----------------------------------"<<endl; 
    cout <<"El total a pagar es de: $ "<<cuenta<<endl;
    cout<<"Gracias por su visita"<<endl;
    return 0;
}
int menuP(){
  int opc=7;
  cout <<"El siguiente programa calcula el costo de comer en un restaurante\n";
  cout <<"---- MENU DE SERVICIO----\n";
  cout <<"1.- Alimentos"<<endl;
  cout <<"2.- Bebidas"<<endl;
  cout <<"3.- Postres"<<endl;
  cout <<"4.- Pagar Cuenta"<<endl;
  cout<<"Ingresa la opcion deseada: ";
  cin>>opc;
  return opc;
 }

 int menuA(int cuenta){
    int cant;
    int opcA1=7;
    do 
    {
    cout <<"---Menu de Alimentos---\n";
    cout <<"1.- Sopa\t $30.00"<<endl;
    cout <<"2.- Pasta\t $40.00"<<endl;
    cout <<"3.- Filete\t $50.00"<<endl;
    cout <<"4.- Regresar al menú"<<endl;
    cout<<"Ingresa la opcion deseada: ";
    cin >> opcA1;
  switch (opcA1)
  {
  case 1:
    cout<<"Ingresa la cantidad de Sopas que quieres: ";
    cin>>cant;
    cuenta=cuenta+cant*30;
        break;
   case 2:
    cout<<"Ingresa la cantidad de Pastas que quieres: ";
    cin>>cant;
    cuenta=cuenta+cant*40;
        break;
   case 3:
    cout<<"Ingresa la cantidad de FIletes que quieres: ";
    cin>>cant;
    cuenta=cuenta+cant*50;
        break;
   case 4:
    cout<<"Has gastado: "<<cuenta<<endl;
        break; 
  default:
        break;
  }
 } while (opcA1!=4);
        return cuenta;
 }

 int menuB(int cuenta){
    int cant;
    int opcB1=7;
    do 
    {
    cout <<"---Menu de Bebidas---\n";
    cout <<"1.- Agua\t $40.00"<<endl;
    cout <<"2.- Michelada\t $60.00"<<endl;
    cout <<"3.- Coca-Cola\t $20.00"<<endl;
    cout <<"4.- Regresar al menú"<<endl;
    cout<<"Ingresa la opcion deseada: ";
    cin >> opcB1;
  switch (opcB1)
  {
  case 1:
    cout<<"Ingresa la cantidad de vasos de Agua que quieres: ";
    cin>>cant;
    cuenta=cuenta+cant*40;
        break;
   case 2:
    cout<<"Ingresa la cantidad de Micheladas que quieres: ";
    cin>>cant;
    cuenta=cuenta+cant*60;
        break;
   case 3:
    cout<<"Ingresa la cantidad de botellas de Coca-Cola que quieres: ";
    cin>>cant;
    cuenta=cuenta+cant*20;
        break;
   case 4:
    cout<<"Has gastado: "<<cuenta<<endl;
        break; 
  default:
        break;
  }
 } while (opcB1!=4);
        return cuenta;
 }

 int menuPo(int cuenta){
    int cant;
    int opcPo1=7;
    do 
    {
    cout <<"---Menu de Postres---\n";
    cout <<"1.- Pay\t $60.00"<<endl;
    cout <<"2.- Flan\t $30.00"<<endl;
    cout <<"3.- Pastel\t $20.00"<<endl;
    cout <<"4.- Regresar al menú"<<endl;
    cout<<"Ingresa la opcion deseada: ";
    cin >> opcPo1;
  switch (opcPo1)
  {
  case 1:
    cout<<"Ingresa la cantidad de Pay que quieres: ";
    cin>>cant;
    cuenta=cuenta+cant*60;
        break;
   case 2:
    cout<<"Ingresa la cantidad de Flan que quieres: ";
    cin>>cant;
    cuenta=cuenta+cant*30;
        break;
   case 3:
    cout<<"Ingresa la cantidad de Pastel que quieres: ";
    cin>>cant;
    cuenta=cuenta+cant*20;
        break;
   case 4:
    cout<<"Has gastado: "<<cuenta<<endl;
        break; 
  default:
        break;
  }
 } while (opcPo1!=4);
        return cuenta;
 }
