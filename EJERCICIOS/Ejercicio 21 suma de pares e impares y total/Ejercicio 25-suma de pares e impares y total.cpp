#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    int pares = 0, impares = 0, total = 0;
    
    for (int i = 1; i <= 10; i++)
    {
    	if ( i % 2 == 0) {
    		pares = pares + i;
		}else
	       impares = impares + i;
		
		cout << i << " ";
	}
	   
	total = pares + impares; 
	
	cout <<endl;
	cout <<endl;
	cout << "Total pares: " << pares <<endl;
	cout << "Total impares: " << impares <<endl;
	cout << "Total pares e impares: " << total <<endl;
   

    return 0;
}


