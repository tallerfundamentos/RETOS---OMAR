#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>

using namespace std;

// Definición de la estructura Producto
struct Producto {
    string nombre;
    int codigo;
    int cantidad;
    double precio;
};

// Función para agregar un nuevo producto al inventario
void agregarProducto(vector<Producto>& inventario) {
    Producto nuevoProducto;
    cout << "Ingrese el nombre del producto: " << endl;
    getline(cin, nuevoProducto.nombre);

    cout << "Ingrese el código del producto: " << endl;
    cin >> nuevoProducto.codigo;
    cout << "Ingrese el precio unitario: " << endl;
    cin >> nuevoProducto.precio;
    cout << "Ingrese la cantidad inicial: " << endl;
    cin >> nuevoProducto.cantidad;

    inventario.push_back(nuevoProducto);
    cout << "Producto agregado al inventario." << endl;
}

// Función para mostrar el inventario actual
void mostrarInventario(const vector<Producto>& inventario) {
    cout << "Inventario actual:" << endl;
    for (const auto& producto : inventario) {
        cout << "Código: " << producto.codigo << ", Nombre: " << producto.nombre
             << ", Cantidad: " << producto.cantidad << ", Precio: $" << producto.precio << endl;
    }
}

// Función para realizar una venta
void realizarVenta(vector<Producto>& inventario) {
    int codigoProducto, cantidadVenta;
    cout << "Ingrese el código del producto a vender: ";
    cin >> codigoProducto;

    auto it = find_if(inventario.begin(), inventario.end(),
                      [codigoProducto](const Producto& p) { return p.codigo == codigoProducto; });

    if (it != inventario.end()) {
        cout << "Ingrese la cantidad a vender: ";
        cin >> cantidadVenta;

        if (cantidadVenta <= it->cantidad) {
            it->cantidad -= cantidadVenta;
            cout << "Venta realizada con éxito." << endl;
        } else {
            cout << "No hay suficiente stock disponible." << endl;
        }
    } else {
        cout << "Producto no encontrado en el inventario." << endl;
    }
}

// Función para actualizar la información de un producto en el inventario
void actualizarProducto(vector<Producto>& inventario) {
    int codigoProducto;
    cout << "Ingrese el código del producto a actualizar: ";
    cin >> codigoProducto;

    auto it = find_if(inventario.begin(), inventario.end(),
                      [codigoProducto](const Producto& p) { return p.codigo == codigoProducto; });

    if (it != inventario.end()) {
        cout << "Ingrese el nuevo nombre del producto: ";
        cin.ignore();
        getline(cin, it->nombre);

        cout << "Ingrese el nuevo precio unitario: ";
        cin >> it->precio;

        cout << "Ingrese la nueva cantidad en inventario: ";
        cin >> it->cantidad;

        cout << "Producto actualizado con éxito." << endl;
    } else {
        cout << "Producto no encontrado en el inventario." << endl;
    }
}

// Función para eliminar un producto del inventario
void eliminarProducto(vector<Producto>& inventario) {
    int codigoProducto;
    cout << "Ingrese el código del producto a eliminar: ";
    cin >> codigoProducto;

    auto it = find_if(inventario.begin(), inventario.end(),
                      [codigoProducto](const Producto& p) { return p.codigo == codigoProducto; });

    if (it != inventario.end()) {
        inventario.erase(it);
        cout << "Producto eliminado con éxito." << endl;
    } else {
        cout << "Producto no encontrado en el inventario." << endl;
    }
}

// Función para editar un producto en el inventario
void editarProducto(vector<Producto>& inventario) {
    int codigoProducto;
    cout << "Ingrese el código del producto a editar: ";
    cin >> codigoProducto;

    auto it = find_if(inventario.begin(), inventario.end(),
                      [codigoProducto](const Producto& p) { return p.codigo == codigoProducto; });

    if (it != inventario.end()) {
        cout << "Seleccione la variable a editar:\n";
        cout << "1. Nombre\n2. Cantidad\n3. Precio\n4. Código\n";
        int opcionEditar;
        cin >> opcionEditar;

        switch (opcionEditar) {
            case 1:
                cout << "Ingrese el nuevo nombre del producto: ";
                cin.ignore();
                getline(cin, it->nombre);
                break;
            case 2:
                cout << "Ingrese la nueva cantidad en inventario: ";
                cin >> it->cantidad;
                break;
            case 3:
                cout << "Ingrese el nuevo precio unitario: ";
                cin >> it->precio;
                break;
            case 4:
                cout << "Ingrese el nuevo código del producto: ";
                cin >> it->codigo;
                break;
            default:
                cout << "Opción no válida. No se realizaron cambios." << endl;
                return;
        }

        cout << "Producto editado con éxito." << endl;
    } else {
        cout << "Producto no encontrado en el inventario." << endl;
    }
}

int main() {
    vector<Producto> inventario;

    int opcion;
    do {
        cout << "\nSistema de Gestión de Inventario" << endl;
        cout << "1. Agregar Producto\n2. Mostrar Inventario\n3. Realizar Venta\n4. Actualizar Producto\n5. Eliminar Producto\n6. Editar Producto\n7. Salir\n";
        cout << "Ingrese su opción: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
            case 1:
                agregarProducto(inventario);
                break;
            case 2:
                mostrarInventario(inventario);
                break;
            case 3:
                realizarVenta(inventario);
                break;
            case 4:
                actualizarProducto(inventario);
                break;
            case 5:
                eliminarProducto(inventario);
                break;
            case 6:
                editarProducto(inventario);
                break;
            case 7:
                cout << "Saliendo del programa. ¡Hasta luego!" << endl;
                break;
            default:
                cout << "Opción no válida. Intente nuevamente." << endl;
        }
    } while (opcion != 7);

    return 0;
}
