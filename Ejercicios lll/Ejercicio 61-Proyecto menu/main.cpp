#include <iostream>
#include "seguridad.h"
#include "menu.h"

using namespace std;

int main(int argc, char** argv) 
{

	bool respuesta = login();
	
	if(respuesta == true){
		menu();
	}
	return 0;
}
