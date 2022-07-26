#include <iostream>

using namespace std;

bool login () {
	string password = "";
	int intentos = 0;
	
	while (intentos <= 3) {
		
		system("cls");
		
		if(intentos == 3) {
			cout << "No se ha validar su password, por favor con el administrador del sistema"
			<<endl;
			
			return false;
		}
		
		cout << "Ingrese su password: ";
		cin >> password;
		
		if (password == "admin") {
			system("cls");
            return true;
		}
	
	
	intentos++;
    }
    
	return false;
}


