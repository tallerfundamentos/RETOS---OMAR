#include <iostream>
using namespace std;

int main() {
    int score = 0; // Variable para almacenar el puntaje del usuario
    cout << "Bienvenido al cuestionario sobre conocimientos generales.\n";
    cout << "Por favor, responda las siguientes preguntas:\n\n";

    // Pregunta 1
    cout << "1. ¿Cuál es la capital de Francia?\n";
    cout << "a) Madrid\n";
    cout << "b) París\n";
    cout << "c) Berlín\n";
    char respuesta1;
    cin >> respuesta1;
    if (respuesta1 == 'b' || respuesta1 == 'B') {
        cout << "¡Correcto! París es la capital de Francia.\n";
        score++;
    } else {
        cout << "Respuesta incorrecta. La respuesta correcta es París.\n";
    }
    cout << "\n";

    // Pregunta 2
    cout << "2. ¿Cuántos planetas hay en nuestro sistema solar?\n";
    cout << "a) 7\n";
    cout << "b) 8\n";
    cout << "c) 9\n";
    char respuesta2;
    cin >> respuesta2;
    if (respuesta2 == 'b' || respuesta2 == 'B') {
        cout << "¡Correcto! Hay 8 planetas en nuestro sistema solar.\n";
        score++;
    } else {
        cout << "Respuesta incorrecta. La respuesta correcta es 8.\n";
    }
    cout << "\n";

    // Pregunta 3
    cout << "3. ¿Quién escribió 'Don Quijote de la Mancha'?\n";
    cout << "a) Miguel de Cervantes\n";
    cout << "b) Gabriel García Márquez\n";
    cout << "c) William Shakespeare\n";
    char respuesta3;
    cin >> respuesta3;
    if (respuesta3 == 'a' || respuesta3 == 'A') {
        cout << "¡Correcto! 'Don Quijote de la Mancha' fue escrito por Miguel de Cervantes.\n";
        score++;
    } else {
        cout << "Respuesta incorrecta. La respuesta correcta es Miguel de Cervantes.\n";
    }
    cout << "\n";

    // Mostrar puntaje final
    cout << "Tu puntaje final es: " << score << " de 3.\n";

    return 0;
}
