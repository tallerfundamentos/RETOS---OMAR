#include <iostream>
#include <string>
#include <utility>  // Incluir la biblioteca estándar para pair

using namespace std;

string decodeMorse(const string& morseCode) {
    // Array de pares de strings que asocia cada código Morse con su respectivo carácter
    pair<string, string> MORSE_CODE[] = {
        {".-", "A"}, {"-...", "B"}, {"-.-.", "C"}, {"-..", "D"}, {".", "E"},
        {"..-.", "F"}, {"--.", "G"}, {"....", "H"}, {"..", "I"}, {".---", "J"},
        {"-.-", "K"}, {".-..", "L"}, {"--", "M"}, {"-.", "N"}, {"---", "O"},
        {".--.", "P"}, {"--.-", "Q"}, {".-.", "R"}, {"...", "S"}, {"-", "T"},
        {"..-", "U"}, {"...-", "V"}, {".--", "W"}, {"-..-", "X"}, {"-.--", "Y"},
        {"--..", "Z"}, {".----", "1"}, {"..---", "2"}, {"...--", "3"}, {"....-", "4"},
        {".....", "5"}, {"-....", "6"}, {"--...", "7"}, {"---..", "8"}, {"----.", "9"},
        {"-----", "0"}, {"···−−−···", "SOS"} // SOS es un caso especial
    };
    // Número total de pares en el array MORSE_CODE
    int n = sizeof(MORSE_CODE) / sizeof(MORSE_CODE[0]);
    
    string decoded;  // Definir una cadena para almacenar el mensaje decodificado
    string token;  // Definir una cadena para almacenar cada token de código Morse
    
    size_t pos = 0;
    size_t found;
    while ((found = morseCode.find(' ', pos)) != string::npos) {  // Buscar los espacios que separan los tokens
        // Extraer el token de código Morse
        token = morseCode.substr(pos, found - pos);
        
        // Buscar el token en el array MORSE_CODE
        bool foundToken = false;
        for (int i = 0; i < n; ++i) {
            if (MORSE_CODE[i].first == token) {
                // Si se encuentra el token, añadir el carácter correspondiente al mensaje decodificado
                decoded += MORSE_CODE[i].second;
                foundToken = true;
                break;
            }
        }
        
        // Si no se encuentra el token, asumir que es un espacio entre palabras y añadir un espacio al mensaje decodificado
        if (!foundToken) {
            decoded += " ";
        }
        
        pos = found + 1;  // Actualizar la posición para buscar el siguiente token
    }
    
    // Añadir el último token si es que lo hay
    if (pos < morseCode.size()) {
        token = morseCode.substr(pos);
        for (int i = 0; i < n; ++i) {
            if (MORSE_CODE[i].first == token) {
                decoded += MORSE_CODE[i].second;
                break;
            }
        }
    }
    
    return decoded;  // Devolver el mensaje decodificado
}

int main() {
    string morseMessage = "···−−−···"; // Morse code for "HEY JUDE"
    string decodedMessage = decodeMorse(morseMessage);  // Decodificar el mensaje Morse
    
    // Imprimir el mensaje Morse original y el mensaje decodificado
    cout << "Original Morse code: " << morseMessage << endl;
    cout << "Decoded message: " << decodedMessage << endl;
    
    return 0;  // Indicar que el programa finalizó correctamente
}
