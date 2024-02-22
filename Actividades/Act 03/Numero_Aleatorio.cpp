#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

//Variables
int n_secreto,n_por_adivinar;

//Adivinar el numero y comparar si el numero secreto es igual a el numero por adivinar
int main(){

    //Inicializar semilla aleatoria
    srand(time(NULL));

    //Generar numero secreto del 1 al 100
    n_secreto = rand() % 100 + 1;

    do{
        cout << "Adivina el numero del 1 al 100: ";
        cin >> n_por_adivinar;

        if(n_por_adivinar > n_secreto){
            cout << "El numero es menor" << endl;
        } else if(n_por_adivinar < n_secreto){
            cout << "El numero es mayor" << endl;
        }

    } while (n_secreto != n_por_adivinar);

    cout << "\nFelicidades haz adivinado el numero" << endl;

    return 0;
}