#include <iostream>


using namespace std;

int main(int argc, char** argv)
{
    // Datos de entrada 
    int a = 0;
    int b = 0;
    int suma = 0, resta = 0, multiplicacion = 0, division = 0;
    
    cout << " Programa para sumar,restar, multiplicar y dividir. " <<endl;
    
    cout << endl;
    
    cout << " Ingrese el valor de a: ";
    cin >> a;
    
    cout << endl;
    
    cout << " Ingrese el valor de b: ";
    cin >> b;
    
    // Proceso
    suma = a + b;
    resta = a - b;
    multiplicacion = a * b; 
    division = a / b;
    
    // Salida 
    cout << endl;
    cout <<" La suma de a + b es: " << suma <<endl;
    cout <<" La resta de a - b es: " << resta <<endl;
    cout <<" La multiplicación de a * b es: " << multiplicacion <<endl;
    cout <<" La división de a / b es: " << division <<endl;
    


    return 0;
}
