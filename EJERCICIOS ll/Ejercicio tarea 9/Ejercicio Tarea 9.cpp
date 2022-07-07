#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int dado1 = 0;
int dado2 = 0;
int continuar = 0;


int main()
{

	while(continuar == 0)
	{
	cout << "----------JUEGO DE DADOS---------" <<endl;
	cout <<endl;
  
    system("pause");

    
	
        srand (time (NULL));
        
        dado1=rand()%(6)+1;
        dado2=rand()%(6)+1; 
    
    
    cout << "dado 1 es igual a: " << dado1 <<endl;
    cout << "dado 2 es igual a: " << dado2 <<endl;

    cout <<endl;
    cout << "Si desea continuar jugando presione 0, de lo contrario presione 1 para salir:  ";
    cin >> continuar;
    
    system("cls");
	}



	return 0;
}

