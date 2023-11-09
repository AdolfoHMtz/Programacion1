//Proyecto 1 - Adolfo Huerta Martínez
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Definir estructura para productos
struct Producto {
    string nombre;
    int cantidad;
    float precio;
};
// Declarar arreglo de productos
Producto productos[3];
int num_productos = 0;
// Función para agregar productos
void agregar_producto() {
    // Pedir datos del producto al usuario
    cout << "Ingrese el nombre del producto: ";
    cin >> productos[num_productos].nombre;
    cout << "Ingrese la cantidad del producto: ";
    cin >> productos[num_productos].cantidad;
    cout << "Ingrese el precio del producto: ";
    cin >> productos[num_productos].precio;
    num_productos++;
}
// Función para buscar productos
void buscar_producto() {
    string nombre;
    cout << "¿Cómo desea ordenar los productos?" << endl;
    cout <<"1. Por Nombre"<< endl;
    cout <<"2. Por Precio"<< endl;
    cout <<"3. Por Cantidad"<< endl;
    int opcion;
    cin >> opcion;
    // Ordenar productos según la opción elegida
    switch (opcion) {
        case 1:
        //Ordenar de mayor a menor por nombre//
        sort(productos, productos + num_productos, [](Producto a, Producto b) {
            return a.nombre > b.nombre;
            });     
        // Pedir al usuario el nombre del producto a buscar
        cout << "Ingrese el nombre del producto a buscar: ";
        cin >> nombre;
        // Buscar producto en el arreglo
        for (int i = 0; i < num_productos; i++) {
        if (productos[i].nombre == nombre) {
        cout << "\t" << "\tNombre"<< "\tCantidad "<<"Precio" << endl;
        cout << "Producto "<< i+1 <<" \t"<< productos[i].nombre << "\t" << productos[i].cantidad << "\t" << productos[i].precio << endl;
        }
            return;
            }
        break;
        
        case 2:
        //Ordenar de mayor a menor por cantidad//
            sort(productos, productos + num_productos, [](Producto a, Producto b) {
                return a.cantidad > b.cantidad;
            });
            // Pedir al usuario la cantidad del producto a buscar 
            int cantidad;
            cout << "Ingrese la cantidad del producto a buscar: ";
            cin >> cantidad;
            // Buscar producto en el arreglo
            for (int i = 0; i < num_productos; i++) {
                if (productos[i].cantidad == cantidad) {
                cout << "\t" << "\tNombre"<< "\tCantidad "<<"Precio" << endl;
                cout << "Producto "<< i+1 <<" \t"<< productos[i].nombre << "\t" << productos[i].cantidad << "\t" << productos[i].precio << endl;
                }
                return;
                }
            break;
        case 3:
        //Ordenar de mayor a menor por precio//
            sort(productos, productos + num_productos, [](Producto a, Producto b) {
                return a.precio > b.precio;
            });
            // Pedir al usuario el precio del producto a buscar
            float precio;
            cout << "Ingrese el precio del producto a buscar: ";
            cin >> precio;
            // Buscar producto en el arreglo
            for (int i = 0; i < num_productos; i++) {
                if (productos[i].precio == precio) {
                cout << "\t" << "\tNombre"<< "\tCantidad "<<"Precio" << endl;
                cout << "Producto "<< i+1 <<" \t"<< productos[i].nombre << "\t" << productos[i].cantidad << "\t" << productos[i].precio << endl;
                }
                return;
                }
            break;
        default:
            cout << "Opción no válida" << endl;
            break;
    }
}

// Función para eliminar productos
void eliminar_producto(){
    string nombre;
    // Ordenar productos por nombre
    sort(productos, productos + num_productos, [](Producto a, Producto b) {
        return a.nombre < b.nombre;
    });
    // Pedir al usuario el nombre del producto a eliminar
    cout << "Ingrese el nombre del producto a eliminar: ";
    cin >> nombre;
    // Buscar producto en el arreglo
    int indice = -1;
    for (int i = 0; i < num_productos; i++) {
        if (productos[i].nombre == nombre) {
            indice = i;
            break;
        }
    }
    // Si se encontró el producto, eliminarlo del arreglo
    if (indice != -1) {
        for (int i = indice; i < num_productos - 1; i++) {
            productos[i] = productos[i + 1];
        }
        num_productos--;
        cout << "Producto eliminado" << endl;
    }
    // Si no se encontró el producto, imprimir mensaje de error
    else {
        cout << "Producto no encontrado" << endl;
    }
}

// Función para mostrar el menú
void mostrar_menu() {
    cout << "Menú:" << endl;
    cout << "1. Agregar producto" << endl;
    cout << "2. Buscar producto" << endl;
    cout << "3. Eliminar producto" << endl;
    cout << "4. Salir" << endl;
}
// Función principal
int main() {
    int opcion;
    do {
        mostrar_menu();
        cout << "Ingrese una opción: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                agregar_producto();
                break;
            case 2:
                buscar_producto();
                break;
            case 3:
                eliminar_producto();
                break;
            case 4:
                cout << "Productos finales:" << endl;
                for (int i = 0; i < num_productos; i++) {
                //Imprimir todos los productos en forma de tabla
                cout << "\t" << "\tNombre"<< "\tCantidad "<<"Precio" << endl;
                cout << "Producto "<< i+1 <<" \t"<< productos[i].nombre << "\t" << productos[i].cantidad << "\t" << productos[i].precio << endl;
                }
                break;
            default:
                cout << "Opción inválida" << endl;
                break;
        }
    } while (opcion != 4);
    return 0;
}
