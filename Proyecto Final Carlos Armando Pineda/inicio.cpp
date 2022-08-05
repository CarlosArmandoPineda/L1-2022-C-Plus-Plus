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
	cout<<"                                          -----------------------" <<endl;
	cout<<"                                          Bienvenido a Innovatech" <<endl;
	cout<<"                                          -----------------------" <<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout <<"Estamos ubicados en Centro Comercial Prisa, Segundo Piso, local #20, BLV. Morazan NO.41, San Pedro Sula, Cortes." <<endl;
	cout <<"                                        Puede contactarnos al 9050-7089.";
	cout <<endl;
	cout<<endl;
	
	cout <<"                                        ************************" <<endl <<endl;
	cout<<"                                         1 - Dispositivos Mobiles "<<endl;
	cout << endl;
	cout<<"                                         2 - Accesorios"<<endl;
	cout << endl;
	cout<<"                                         3 - Imprimir factura "<<endl;
	cout << endl;
	cout<<"                                         0 - Salir o Retroceder"<<endl;
	
	
	cout<<endl;
	cout<<"             Seleccione una opcion: ";
	cin>> elegir;
	cout << endl;
	cout <<endl;
	cout << "                                           Gracias por visitarnos.";
	
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

