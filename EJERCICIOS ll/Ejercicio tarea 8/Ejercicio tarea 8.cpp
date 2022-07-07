#include <iostream>
#include <math.h>


using namespace std;

double raiz(double num){
	
	return sqrt(num);
}

int main()
{
	double  num;
	
	cout << "Ingrese un numero para calcular su raiz cuadrada: ";
	cin >>num;
	cout <<endl;
	
	if(num < 0)
	{
		cout << "La raiz de este numero no existe";
	}
	else
	{
	cout << "La raiz de " <<num << " es: " <<raiz(num);	
	}
	
	return 0;
}

