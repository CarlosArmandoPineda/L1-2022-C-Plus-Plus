#include <iostream>

using namespace std;

bool login () {
	string password = "";
	int intentos = 0;
	
	while (intentos <= 3) {
		
		system("cls");
		
		cout << "Bienveindo a" <<endl;	

     cout << " 	   _____     ________                                    " <<endl;
     cout << "  /  |  |   /  _____/_____    _____   ___________  ______   " <<endl;
     cout << " /   |  |_ /   \  ___\__  \  /     \_/ __ \_  __ \/  ___/   " <<endl;
     cout << "/    ^   / \    \_\  \/ __ \|  Y Y  \  ___/|  | \/\___ \    " <<endl;
     cout << "\____   |   \______  (____  /__|_|  /\___  >__|  /____  >   " <<endl;
     cout << "     |__|          \/     \/      \/     \/           \/    " <<endl;
     cout << "" <<endl;

     cout <<endl;
    cout <<endl;
     cout <<endl;	
		
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


