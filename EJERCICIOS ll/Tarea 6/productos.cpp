#include <iostream>

using namespace std;

extern void agregarProducto(string descripcion, int cantida, double precio);

void productos(int opcion)
{
	system("cls");
	
int opcionProducto = 0;

	switch(opcion)
	{
	case 1:
	{
		cout << "BEBIDAS CALIENTES " <<endl;
		cout << "******************" <<endl;
		cout << "1 - Capuccino" <<endl;
		cout << "2 - Expreso" <<endl;
		cout << "3 - Latte de chocolate" <<endl;
	    
	    cout << " Ingrese una opcion: ";
		cin >> opcionProducto;
		
		switch(opcionProducto)
		{
		case 1:
			agregarProducto("Capuccino L.40.00", 1, 40);
			break;
		case 2:
			agregarProducto("Expresso L-30.00", 1, 30);
			break;
		case 3:
			agregarProducto("Latte de chocolate L-25.00", 1, 25);
			break;
				
		default:
			{
			cout << "opcion no valida";
			return;
			break;
			}	
		}
			
		cout <<endl;
		cout << "Producto agregado" <<endl <<endl;
		system("pause");
	
		break;
	}
	case 2:
	{	
		cout << "BEBIDAS FRIAS" <<endl;
		cout << "*************" <<endl;
		cout << "1 - Limonada" <<endl;
		cout << "2 - Batido de fresa" <<endl;
		cout << "3 - Te helado" <<endl;
	    
	    cout << " Ingrese una opcion: ";
		cin >> opcionProducto;
		
		switch(opcionProducto)
		{
		case 1:
			agregarProducto("Limonada L.15.00", 1, 15);
			break;
		case 2:
			agregarProducto("Batido de fresa L-20.00", 1, 20);
			break;
		case 3:
			agregarProducto("Te helado L-25.00", 1, 25);
			break;
				
		default:
			{
			cout << "opcion no valida";
			return;
			break;
			}	
		}
			
		cout <<endl;
		cout << "Producto agregado" <<endl <<endl;
		system("pause");
	
		break;
	}
	case 3:
	{	
		cout << "REPOSTERIA" <<endl;
		cout << "**********" <<endl;
		cout << "1 - Pastel de chocolate" <<endl;
		cout << "2 - Pastel de Limon" <<endl;
		cout << "3 - Cupcakes" <<endl;
	    
	    cout << " Ingrese una opcion: ";
		cin >> opcionProducto;
		
		switch(opcionProducto)
		{
		case 1:
			agregarProducto("Pastel de chocolate L.150.00", 1, 150);
			break;
		case 2:
			agregarProducto("Pastel de Limon L-100.00", 1, 100);
			break;
		case 3:
			agregarProducto("Cupcakes L-30.00", 1, 30);
			break;
				
		default:
			{
			cout << "opcion no valida";
			return;
			break;
	     	}
    	}
	
    	cout <<endl;
		cout << "Producto agregado" <<endl <<endl;
		system("pause");
		
		break;
	}
	
	default:
		break;
	}
		
}
