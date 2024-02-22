#include <iostream>
#include<string>

using namespace std;

string nombre = " ";

int main(){
		
	cout << "Ingresa tu nombre: ";
	getline(cin >> nombre);
	
	cout << "Tu nombre: " << nombre;
	
	return 0;
}