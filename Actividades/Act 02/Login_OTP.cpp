#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

bool verificacion_login(const string& usuario, const string& contrasena) {
   
    string usuario_verificacion = "Omar";
    string contrasena_verificacion = "1234";

    return (usuario == usuario_verificacion && contrasena == contrasena_verificacion);
}

void numero_OTP() {
   
    int OTP;
   
    // Semilla
    srand(time(NULL));

    // Generar numero de 3 digitos
    OTP = rand() % 900 + 100;

    cout << "TU NUMERO OTP ES: " << OTP << endl;
}

int main() {
    string usuario, contrasena;

    try
    {
        do{
            cout << "Ingresa tu usuario: ";
            cin >> usuario;

            cout << "Ingresa tu contraseña: ";
            cin >> contrasena;

            //
            if (verificacion_login(usuario, contrasena)) {
                numero_OTP();
                break;  // Salir del bucle si la verificación es exitosa
            } else {
                cout << "Usuario o contraseña incorrectos. Inténtalo de nuevo." << endl;
                // Puedes volver a solicitar usuario y contraseña aquí si deseas
                break;
            }

        } while(verificacion_login(false))
    }
    catch(const exception& e){}
    {
        std::cerr << std::e.what() << '\n';
    }
    

    return 0;
}