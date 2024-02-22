#include <iostream>
#include <string>

using namespace std;

const int MAX_EMPLEADOS = 100;  // Número máximo de empleados

struct Empleado {
    string nombre;
    int edad;
    double salario;
};

Empleado listaEmpleados[MAX_EMPLEADOS];
int cantidadEmpleados = 0;  // Variable para rastrear la cantidad actual de empleados

void agregarEmpleado() {
    if (cantidadEmpleados < MAX_EMPLEADOS) {
        Empleado nuevoEmpleado;
        cout << "Ingrese el nombre del empleado: ";
        cin >> nuevoEmpleado.nombre;
        cout << "Ingrese la edad del empleado: ";
        cin >> nuevoEmpleado.edad;
        cout << "Ingrese el salario del empleado: ";
        cin >> nuevoEmpleado.salario;

        listaEmpleados[cantidadEmpleados++] = nuevoEmpleado;
        cout << "Empleado agregado con éxito." << endl;
    } else {
        cout << "Error: Se alcanzó el límite máximo de empleados." << endl;
    }
}

void mostrarInformacionEmpleados() {
    cout << "Información de empleados:" << endl;
    for (int i = 0; i < cantidadEmpleados; ++i) {
        cout << "ID: " << i << ", Nombre: " << listaEmpleados[i].nombre << ", Edad: " << listaEmpleados[i].edad
             << ", Salario: " << listaEmpleados[i].salario << endl;
    }

    // Calcular y mostrar el total de salarios directamente aquí
    double totalSalarios = 0;
    for (int i = 0; i < cantidadEmpleados; ++i) {
        totalSalarios += listaEmpleados[i].salario;
    }
    cout << "Total de salarios: " << totalSalarios << endl;
}

void editarEmpleado(int id) {
    if (id >= 0 && id < cantidadEmpleados) {
        int opcion;
        cout << "Seleccione qué desea editar para el empleado " << id << ":" << endl;
        cout << "1. Nombre" << endl;
        cout << "2. Edad" << endl;
        cout << "3. Salario" << endl;
        cout << "Seleccione una opción (1-3): ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese el nuevo nombre: ";
                cin >> listaEmpleados[id].nombre;
                cout << "Nombre actualizado con éxito." << endl;
                break;
            case 2:
                cout << "Ingrese la nueva edad: ";
                cin >> listaEmpleados[id].edad;
                cout << "Edad actualizada con éxito." << endl;
                break;
            case 3:
                cout << "Ingrese el nuevo salario: ";
                cin >> listaEmpleados[id].salario;
                cout << "Salario actualizado con éxito." << endl;
                break;
            default:
                cout << "Opción no válida." << endl;
                break;
        }
    } else {
        cout << "ID de empleado no válido." << endl;
    }
}

void eliminarEmpleado(int id) {
    if (id >= 0 && id < cantidadEmpleados) {
        for (int i = id; i < cantidadEmpleados - 1; ++i) {
            listaEmpleados[i] = listaEmpleados[i + 1];
        }
        cantidadEmpleados--;
        cout << "Empleado eliminado con éxito." << endl;
    } else {
        cout << "ID de empleado no válido." << endl;
    }
}

int main() {
    int opcion;

    do {
        cout << "Menú de opciones:" << endl;
        cout << "1. Agregar empleado" << endl;
        cout << "2. Mostrar información de empleados y calcular salarios" << endl;
        cout << "3. Editar información de empleado" << endl;
        cout << "4. Eliminar empleado" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione una opción (1-5): ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                agregarEmpleado();
                break;
            case 2:
                mostrarInformacionEmpleados();
                break;
            case 3:
                int idEditar;
                cout << "Ingrese el ID del empleado que desea editar: ";
                cin >> idEditar;
                editarEmpleado(idEditar);
                break;
            case 4:
                int idEliminar;
                cout << "Ingrese el ID del empleado que desea eliminar: ";
                cin >> idEliminar;
                eliminarEmpleado(idEliminar);
                break;
            case 5:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opción no válida. Intente nuevamente." << endl;
                break;
        }

    } while (opcion != 5);

    return 0;
}
