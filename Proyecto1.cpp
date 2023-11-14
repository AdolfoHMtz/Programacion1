// Proyecto 1: Inventario de ferretería
// Programación I
// Adolfo Huerta Martínez
#include <iostream>
#include <string>
using namespace std;

// Definición de la estructura Producto
struct Producto {
    string nombre;
    int cantidad;
    float precio;
};

 // Número máximo de productos en el inventario
const int MAX_PRODUCTOS = 100;

// Función para imprimir lista de productos
void imprimirInventario(const Producto inventario[], int cantidadProductos) {
    cout << "\nInventario de la ferretería:\n";
    cout << "---------------------------------------------------------\n";
    cout << "\t" << "   |\tNombre \t"<< " |\tCantidad"<<" |\tPrecio \t|" << endl;
    for (int i = 0; i < cantidadProductos; ++i) {
    cout << "Producto "<< i+1 << " | \t " << inventario[i].nombre << "\t | \t" << inventario[i].cantidad << "\t | \t" << inventario[i].precio << "\t|\n";
    }
    cout << "---------------------------------------------------------\n";
}

// Función para verificar si un nombre de producto ya existe en el inventario
bool nombreExistente(const Producto inventario[], int cantidadProductos, const string& nombre) {
    for (int i = 0; i < cantidadProductos; ++i) {
        if (inventario[i].nombre == nombre) {
            //El nombre del producto ya existe en el inventario
            return true; 
        }
    }
    //El nombre del producto no existe en el inventario
    return false; 
}

// Función 1: Agregar un nuevo producto al inventario
void agregarProducto(Producto inventario[], int& cantidadProductos) {
    if (cantidadProductos < MAX_PRODUCTOS) {
        Producto nuevoProducto;
        do {
            cout << "Ingrese el nombre del producto: ";
            cin >> nuevoProducto.nombre;
            // Verificar si el nombre ya existe en el inventario
            if (nombreExistente(inventario, cantidadProductos, nuevoProducto.nombre)) {
                cout << "Este producto ya ha sido registrado\n";
            }
        } while (nombreExistente(inventario, cantidadProductos, nuevoProducto.nombre));
        cout << "Ingrese la cantidad del producto: ";
        cin >> nuevoProducto.cantidad;
        cout << "Ingrese el precio del producto: ";
        cin >> nuevoProducto.precio;
        inventario[cantidadProductos] = nuevoProducto;
        cantidadProductos++;
        cout << "Producto agregado al inventario." << endl;
    } else {
        cout << "Inventario lleno" << endl;
    }
}

// Función 2: Ordenar el inventario y hacer busquedas

// Ordenar el inventario alfabéticamente
void ordenarPorNombre(Producto inventario[], int cantidadProductos) {
        string nombreBusqueda;
        for (int i = 0; i < cantidadProductos - 1; ++i) {
        for (int j = i + 1; j < cantidadProductos; ++j) {
            if (inventario[i].nombre > inventario[j].nombre) {
                swap(inventario[i], inventario[j]);
            }
        }
    }
        imprimirInventario(inventario, cantidadProductos);
        cout << "Ingrese el nombre del producto a buscar: ";
        cin >> nombreBusqueda;
        // Buscar el producto por nombre
        for (int i = 0; i < cantidadProductos; ++i) {
            if (inventario[i].nombre == nombreBusqueda) {
                cout << "Producto encontrado en la posición " << i + 1 << "\n";
                cout << "Nombre: " << inventario[i].nombre << "\n";
                cout << "Cantidad: " << inventario[i].cantidad << "\n";
                cout << "Precio: " << inventario[i].precio << "\n";
                return;
            }
        }
    cout << "Producto no encontrado en el inventario.\n";
}

// Ordenar el inventario por cantidad de mayor a menor
void ordenarPorCantidad(Producto inventario[], int cantidadProductos) {
        int cantidadBusqueda;
        for (int i = 0; i < cantidadProductos - 1; ++i) {
        for (int j = i + 1; j < cantidadProductos; ++j) {
            if (inventario[i].cantidad < inventario[j].cantidad) {
                swap(inventario[i], inventario[j]);
            }
        }
    }
            imprimirInventario(inventario, cantidadProductos);
            cout << "Ingrese la cantidad del producto a buscar: ";
            cin >> cantidadBusqueda;
            // Buscar el producto por cantidad
            for (int i = 0; i < cantidadProductos; ++i) {
                if (inventario[i].cantidad == cantidadBusqueda) {
                    cout << "Producto encontrado en la posición " << i + 1 << "\n";
                    cout << "Nombre: " << inventario[i].nombre << "\n";
                    cout << "Cantidad: " << inventario[i].cantidad << "\n";
                    cout << "Precio: " << inventario[i].precio << "\n";
                    return; // Terminar la búsqueda
                }
            }
            cout << "Producto no encontrado en el inventario.\n";
}

// Ordenar el inventario por precio de mayor a menor
void ordenarPorPrecio(Producto inventario[], int cantidadProductos) {
        float precioBusqueda;
        for (int i = 0; i < cantidadProductos - 1; ++i) {
        for (int j = i + 1; j < cantidadProductos; ++j) {
            if (inventario[i].precio < inventario[j].precio) {
                swap(inventario[i], inventario[j]);
            }
        }
    }
        imprimirInventario(inventario, cantidadProductos);
        cout << "Ingrese el precio del producto a buscar: ";
        cin >> precioBusqueda;
        // Buscar el producto por precio
        for (int i = 0; i < cantidadProductos; ++i) {
            if (inventario[i].precio == precioBusqueda) {
                cout << "Producto encontrado en la posición " << i + 1 << "\n";
                cout << "Nombre: " << inventario[i].nombre << "\n";
                cout << "Cantidad: " << inventario[i].cantidad << "\n";
                cout << "Precio: " << inventario[i].precio << "\n";
                    return; // Terminar la búsqueda
            }
         }
         cout << "Producto no encontrado en el inventario.\n";
}

// Menú de opciones de ordenamiento
void ordenarInventario(Producto inventario[], int cantidadProductos) {
    int opcionOrdenamiento;
    cout << "\n-- Opciones de ordenamiento --\n";
    cout << "-----------------------------\n";
    cout << " 1. Por nombre \n";
    cout << " 2. Por cantidad \n";
    cout << " 3. Por precio\n";
    cout << "-----------------------------\n";
    cout << "Ingrese su opción: ";
    cin >> opcionOrdenamiento;
    switch (opcionOrdenamiento) {
        case 1:
            ordenarPorNombre(inventario, cantidadProductos);
            break;
        case 2:
            ordenarPorCantidad(inventario, cantidadProductos);
            break;
        case 3:
            ordenarPorPrecio(inventario, cantidadProductos);
            break;
        default:
            cout << "Opción no válida. Por favor, ingrese una opción del menú.\n";
    }
}

// Función 3: Eliminar productos del inventario
void eliminarProducto(Producto inventario[], int& cantidadProductos) {
    if (cantidadProductos > 0) {
        string nombreEliminar;
         // Ordenar alfabéticamente
            for (int i = 0; i < cantidadProductos - 1; ++i) {
                 for (int j = i + 1; j < cantidadProductos; ++j) {
                  if (inventario[i].nombre > inventario[j].nombre) {
                    swap(inventario[i], inventario[j]);
                   }
             }
          }
        imprimirInventario(inventario, cantidadProductos);
        cout << "Nombre del producto a eliminar: ";
        cin >> nombreEliminar;
        // Buscar el producto por nombre
        int indiceEliminar = -1;
        for (int i = 0; i < cantidadProductos; ++i) {
            if (inventario[i].nombre == nombreEliminar) {
                indiceEliminar = i;
                break;
            }
        }
        if (indiceEliminar != -1) {
            // Eliminar el producto y recorrer los arreglos
            for (int i = indiceEliminar; i < cantidadProductos - 1; ++i) {
                inventario[i] = inventario[i + 1];
            }
            cantidadProductos--;
            // Ordenar alfabéticamente
            for (int i = 0; i < cantidadProductos - 1; ++i) {
                 for (int j = i + 1; j < cantidadProductos; ++j) {
                  if (inventario[i].nombre > inventario[j].nombre) {
                    swap(inventario[i], inventario[j]);
                   }
             }
          }
            cout << "Producto eliminado del inventario.\n";
            imprimirInventario(inventario, cantidadProductos);
            return;
        } else {
            cout << "Producto no encontrado en el inventario.\n";
        }
    } else {
        cout << "No hay productos en el inventario para eliminar.\n";
    }
}

// Función menú principal
int main() {
    Producto inventario[MAX_PRODUCTOS]; // Array que almacena los productos
    int cantidadProductos = 0; // Variable que lleva el control de la cantidad actual de productos

    int opcion;
        cout << "\n";
        cout <<" --Inventario ferreteria--\n";
        cout << "\n";
    do {
        cout << "\t   Menu:\n";
        cout << "--------------------------\n";
        cout << " 1. Agregar Producto\n";
        cout << " 2. Ordenar Inventario\n";
        cout << " 3. Eliminar Producto\n";
        cout << " 0. Salir\n";
        cout << "--------------------------\n";
        cout << "Ingrese su opción: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                agregarProducto(inventario, cantidadProductos);
                break;
            case 2:
                ordenarInventario(inventario, cantidadProductos);
                break;
            case 3:
                eliminarProducto(inventario, cantidadProductos);
                break;
            case 0:
                cout << "Cerrando inventario...\n";
                break;
            default:
                cout << "Opción no válida. Por favor, ingrese una opción del menú.\n";
        }
    } while (opcion != 0);
    // Imprimir la lista final de productos al salir
    imprimirInventario(inventario, cantidadProductos);
    return 0;
}
