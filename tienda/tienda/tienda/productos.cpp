#include <iostream>
#include "factura.h"
using namespace std;

void productos(int opcion) {

	int opcionProducto = 0;

	int gama = 0;


	switch (opcion) {
	case 1: {

		system("cls");
		cout << "Dispositivos Mobiles" << endl;
		cout << "1 - Gama Alta " << endl;
		cout << "2 - Gama Media " << endl;
		cout << "3 - Gama Baja " << endl;
		
		cout << "Ingrese una opcion: ";
		cin >> opcionProducto;


		switch (opcionProducto) 
		{

		case 1: {
			system("cls");

			cout << "Gama Alta" << endl;
			cout << "1 - Samung s10 " << endl;
			cout << "2 - Samung s20" << endl;
			
			cout << "Ingrese una opcion del menu: ";
			cin >> gama;


			switch (gama) 
			{
			case 1: {
				agregarProducto(" 1 - Samsung s10 - L 16000.00 ", 1, 16000);
				break;
			}
			case 2: {
				agregarProducto(" 2 - Samung s20 - L 6995.00 ", 1, 6995);
				break;
			}
			}

			cout << endl;
			cout << "Producto agregado" << endl << endl;
			system("pause");
			break;

		case 2: {
			system("cls");
			cout << "Gama Media" << endl;
			cout << "1 - LG Q7 " << endl;
			cout << "2 - SAMSUNG A50" << endl;
			
			cout << "Ingrese una opcion del menu: ";
			cin >> gama;


			switch (gama)
			{
			case 1: {
				agregarProducto(" 1 - lG Q7 - L 10,495.00 ", 1, 10495);
				break;
			}
			case 2: {
				agregarProducto(" 2 - SAMSUNG A50 - L 12,995.00 ", 1, 12995);
				break;
			}
			}

			cout << endl;
			cout << "Producto agregado" << endl << endl;
			system("pause");

			break;
		}

		case 3: {

			system("cls");
			cout << "Gama Baja" << endl;
			cout << "1 - Smart TV LG 43 pulg LED 4K ThinQ AI " << endl;
			cout << "2 - Smart TV LG 55 pulg NanoCell 4K ThinQ AI" << endl;
			cout << "Ingrese una opcion del menu: ";
			cin >> gama;


			switch (gama) {
			case 1: {
				agregarProducto(" 1 - Smart TV LG 43 pulg LED 4K ThinQ AI - L 10,495.00 ", 1, 10495);
				break;
			}
			case 2: {
				agregarProducto(" 2 - Smart TV LG 55 pulg NanoCell 4K ThinQ AI - L 19,995.00 ", 1, 19995);
				break;
			}
			}
			cout << endl;
			cout << "Producto agregado" << endl << endl;
			system("pause");

			break;
		}

		default: {

			cout << " Opcion no valida " << endl;
			system("pause");
			break;
		}
			   break;
		}

		}
	}
	}

}