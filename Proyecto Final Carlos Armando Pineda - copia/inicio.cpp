#include <iostream>
using namespace std;

extern void tienda(int elegir);

extern void imprimirFacturaEnvio();





void inicio()

{
	
	int elegir = 0;
	int nombre = 0;

while (true){
	
	system("cls");
	
	cout<< endl;
	cout<<"                                        -----------------------" <<endl;
	cout<<"                                        Bienvenido a Innovatech" <<endl;
	cout<<"                                        -----------------------" <<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	
	
	
	cout<<"1 - Dispositivos Mobiles "<<endl;
	cout<<"2 - Accesorios"<<endl;
	cout<<"3 - Imprimir factura "<<endl;
	cout<<"0 - Salir"<<endl;
	
	
	cout<<endl;
	cout<<"Seleccione una opcion: ";
	cin>> elegir;
	
	if (elegir == 0){
		
    break;		
	}
	
	if (elegir == 3){
		imprimirFacturaEnvio();
			
	} else {
		
		tienda(elegir);
	}
	
	
	

	


}

}

