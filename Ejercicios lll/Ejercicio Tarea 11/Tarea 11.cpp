#include <iostream>
#include <time.h>
#include <stdlib.h>


using namespace std;

int random()
{
    return rand() % 5 + 1;
}

int main(int argc, char** argv)
{

    int random();
	srand(time(NULL));
	int suma = 0;
	int numero [5][5];
	
	for (int i = 0; i < 5; i++)
	{
        
		for (int j = 0; j < 5; j++)
        {
        	numero[i][j] = random();
        	suma = suma + numero[i][j];
        }
    }
        
    cout <<"Suma con Arreglo Bidimensional ";
    cout <<endl;
    cout <<endl;
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
        	cout << "  " <<numero[i][j];
        }
        cout <<endl;
    }
    
    cout <<endl;
    cout<< "Total Suma  : " << suma <<endl;
	
	return 0;
}


