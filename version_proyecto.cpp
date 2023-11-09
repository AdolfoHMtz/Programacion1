#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Estructura para guardar los datos de un producto
struct Producto {
    string nombre;
    int cantidad;
    float precio;
};

// Función para agregar un producto al inventario
void agregarProducto(Producto inventario[], int& numProductos) {
    // Pedir los datos del producto
    cout << "Ingrese el nombre del producto: ";
    cin >> inventario[numProductos].nombre;
    cout << "Ingrese la cantidad del producto: ";
    cin >> inventario[numProductos].cantidad;
    cout << "Ingrese el precio del producto: ";
    cin >> inventario[numProductos].precio;
    // Incrementar el número de productos
    numProductos++;
}

// Función para buscar un producto en el inventario
void buscarProducto(Producto inventario[], int numProductos) {
    // Pedir la opción de búsqueda
    cout << "¿Por cuál opción desea buscar el producto?" << endl;
    cout << "1. Nombre" << endl;
    cout << "2. Precio" << endl;
    cout << "3. Cantidad" << endl;
    int opcion;
    cin >> opcion;
    // Ordenar el inventario según la opción de búsqueda
    switch (opcion) {
        case 1:
            sort(inventario, inventario + numProductos, [](Producto a, Producto b) {
                return a.nombre > b.nombre;
            });
            break;
        case 2:
            sort(inventario, inventario + numProductos, [](Producto a, Producto b) {
                return a.precio > b.precio;
            });
            break;
        case 3:
            sort(inventario, inventario + numProductos, [](Producto a, Producto b) {
                return a.cantidad > b.cantidad;
            });
            break;
        default:
            cout << "Opción inválida" << endl;
            return;
    }
    // Pedir el nombre del producto a buscar
    string nombreBuscado;
    cout << "Ingrese el nombre del producto a buscar: ";
    cin >> nombreBuscado;
    // Buscar el producto en el inventario
    for (int i = 0; i < numProductos; i++) {
        if (inventario[i].nombre == nombreBuscado) {
            // Imprimir el producto encontrado
            cout << "Producto encontrado:" << endl;
            cout << "Nombre: " << inventario[i].nombre << endl;
            cout << "Cantidad: " << inventario[i].cantidad << endl;
            cout << "Precio: " << inventario[i].precio << endl;
            return;
        }
    }
    // Si no se encontró el producto
    cout << "Producto no encontrado" << endl;
}

// Función para eliminar un producto del inventario
void eliminarProducto(Producto inventario[], int& numProductos) {
    // Ordenar el inventario por nombre
    sort(inventario, inventario + numProductos, [](Producto a, Producto b) {
        return a.nombre > b.nombre;
    });
    // Pedir el nombre del producto a eliminar
    string nombreEliminar;
    cout << "Ingrese el nombre del producto a eliminar: ";
    cin >> nombreEliminar;
    // Buscar el producto en el inventario
    for (int i = 0; i < numProductos; i++) {
        if (inventario[i].nombre == nombreEliminar) {
            // Eliminar el producto del inventario
            for (int j = i; j < numProductos - 1; j++) {
                inventario[j] = inventario[j + 1];
            }
            numProductos--;
            cout << "Producto eliminado" << endl;
            return;
        }
    }
    // Si no se encontró el producto
    cout << "Producto no encontrado" << endl;
}

int main() {
    // Arreglo para guardar los productos
    const int MAX_PRODUCTOS = 100;
    Producto inventario[MAX_PRODUCTOS];
    int numProductos = 0;
    // Menú principal
    while (true) {
        cout << "¿Qué desea hacer?" << endl;
        cout << "1. Agregar producto" << endl;
        cout << "2. Buscar producto" << endl;
        cout << "3. Eliminar producto" << endl;
        cout << "4. Salir" << endl;
        int opcion;
        cin >> opcion;
        switch (opcion) {
            case 1:
                agregarProducto(inventario, numProductos);
                break;
            case 2:
                buscarProducto(inventario, numProductos);
                break;
            case 3:
                eliminarProducto(inventario, numProductos);
                break;
            case 4:
                return 0;
            default:
                cout << "Opción inválida" << endl;
        }
    }
}
