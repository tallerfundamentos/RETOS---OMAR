#include <iostream>
using namespace std;

//Materias
double 
Biologia,
Ciencias,
Matematicas;

//Calcular Promedio
double promedio;

//Programa para calcular Promedios
int main() {

    //Pedir e Ingresar Datos de Calificaciones
    cout << "Ingresa la calificacion de Biologia: ";
    cin >> Biologia;
    cout << "Ingresa la calificacion de Ciencias: ";
    cin >> Ciencias;
    cout << "Ingresa la calificacion de Matematicas: ";
    cin >> Matematicas;

    promedio = (Biologia+Ciencias+Matematicas)/3;

    //Imprimir Promedio
    cout << "\nTU PROMEDIO ES: " << promedio << endl;

    //Condicional para determinar si esta APROBADO o REPROBADO
    if (promedio > 60){
        cout << "\nAPROBADO" << endl;
    } else {
        cout << "\nREPROBADO" << endl;
    }

    //Fin del Programa
    return 0;
}