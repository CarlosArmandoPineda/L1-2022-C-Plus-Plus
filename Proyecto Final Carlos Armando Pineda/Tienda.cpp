#include <iostream>
using namespace std;

extern void nuevoobjeto(string descripcion, int cantidad, double precio);

void tienda(int elegir){
	
	
	int opcionProducto = 0;
	int opcionProducto1 = 0;
	
	switch(elegir){
	case 1: {
	
	system("cls");
	cout <<"                                                 --------------------"<<endl;
	cout <<"                                                 DISPOSITIVOS MOBILES" <<endl;
	cout <<"                                                 --------------------"<<endl;
	cout <<endl;
	cout <<"                                    1 - DISPOSITIVOS ENTRE 20,000 Y 47,500 LEMPIRAS" <<endl;
	cout <<endl;
	cout <<"                                    2 - DISPOSITIVOS ENTRE 15,000 Y 27,000 LEMPIRAS" <<endl;
	cout <<endl;
	cout <<"                                    3 - DISPOSITIVOS ENTRE 3,000 Y 14,000 LEMPIRAS" <<endl;
	cout <<endl;	
	cout << "                                       Ingrese una opcion basada en su presupuesto: ";
	cin >> opcionProducto1;
	
	switch(opcionProducto1)
	{
	case 1: {
	system("cls");	
	cout << "                                         DISPOSITIVOS ENTRE 20,000 Y 47,500 LEMPIRAS " <<endl;
    cout << endl;
    cout << endl;
	cout << "                                    1 - Samsung S21 ULTRA, 8GB RAM, 256GB ROM, 31,412.00" <<endl <<endl;
	cout << "                                    2 - Oppo Find X3 PRO,  12GB RAM, 256GB ROM, 29,166.00" <<endl <<endl;
	cout << "                                    3 - Iphone 13 Pro Max, 8GB RAM, 1TB ROM, 42,415.00" <<endl <<endl;
	cout << "                                    4 - Samsung S22 ULTRA, 12GB RAM, TB ROM, 42,853.00" <<endl <<endl;
	cout << "                                    5 - Huawei Mate 40 Pro, 8GB RAM, 256GB ROM, 25,931.00" <<endl <<endl;
	cout << "                                    0 - Salir" <<endl;
	cout <<endl;
	cout << "                                            Ingrese un numero para escoger su producto: "; 
	cin >> opcionProducto;
		
		switch (opcionProducto) {
		
		case 1: 
		nuevoobjeto("Samsung S21 ULTRA L.31,412.00", 1, 31412);
		break;
		
		case 2: 
		nuevoobjeto("Oppo Find X3 PRO, L. 29,166.00", 1, 29166);
		break;
		
		case 3: 
		nuevoobjeto("Iphone 13 Pro Max, L. 42,415.000", 1, 42415);
		break;
		
		case 4: 
		nuevoobjeto("Samsung S22 ULTRA, L. 42,853", 1, 42853);
		break;
		
		case 5: 
		nuevoobjeto("Huawei Mate 40 Pro, L. 25,931.00", 1, 25931);
		break;
		
		default:
			{
			cout << "Opcion no valida "<< endl ;
			system("pause");
			return;
			break;
		}	
	}
		cout << endl ;
	    cout << "Producto agregado"<<endl<<endl;
	    system("pause");
		break;
	}
	
	case 2: {
	system("cls");	
	cout << "                                         DISPOSITIVOS ENTRE 15,000 Y 27,000 LEMPIRAS " <<endl;
    cout << endl;
    cout << endl;
	cout << "                                    1 - One Plus 9 Pro, 12GB RAM, 256GB ROM, 24,953.00" <<endl <<endl;
	cout << "                                    2 - Goggle Pixel 6 PRO,  12GB RAM, 512GB ROM, 19,778.00" <<endl <<endl;
	cout << "                                    3 - Iphone 12, 4GB RAM, 128GB ROM, 17,068.00" <<endl <<endl;
	cout << "                                    4 - Goggle Pixel 5, 8GB RAM, 128 GB ROM, 18,289.00" <<endl <<endl;
	cout << "                                    5 - Realme 9i, 4GB RAM, 64GB ROM, 17,500.00" <<endl <<endl;
	cout << "                                    0 - Salir" <<endl;
	cout <<endl;	
	cout << "                                         Ingrese un numero para escoger su producto: "; 
	cin >> opcionProducto;
		
		switch (opcionProducto) {
		
		case 1: 
		nuevoobjeto("One Plus 9 Pro, 24,953.00", 1, 24953);
		break;
		
		case 2: 
		nuevoobjeto("Goggle Pixel 6 PRO, 19,778.00", 1, 19778);
		break;
		
		case 3: 
		nuevoobjeto("Iphone 12, 17,068.00", 1, 17068);
		break;
		
		case 4: 
		nuevoobjeto("Goggle Pixel 5, 18,289.00", 1, 18289);
		break;
		
		case 5: 
		nuevoobjeto("Realme 9i, 17,500.00", 1, 17500);
		break;
		
		default:
			{
			cout << "Opcion no valida "<< endl ;
			system("pause");
			return;
			break;
		}	
	}
		cout << endl ;
	    cout << "Producto agregado"<<endl<<endl;
	    system("pause");
		break;
	

	}
	
	case 3: {
	system("cls");	
	cout << "                                         DISPOSITIVOS ENTRE 3,000 Y 14,000 LEMPIRAS " <<endl <<endl;
    cout << endl;
	cout << "                                    1 - Realme GT 5G, 8GB RAM, 256GB ROM, 9,742.00" <<endl <<endl;
	cout << "                                    2 - Motorola Edge 30,  8GB RAM, 256GB ROM, 12,184.00" <<endl <<endl;
	cout << "                                    3 - Xiaomi Redmi Note 11, 4GB RAM, 64GB ROM, 4,859.00" <<endl <<endl;
	cout << "                                    4 - Poco F3 5G, 6GB RAM, 128 GB ROM, 8,277.00" <<endl <<endl;
	cout << "                                    5 - Xiaomi Mi 11, 8GB RAM, 128GB ROM, 11,207.00" <<endl<<endl;
	cout << "                                    0 - Salir" <<endl;
	cout <<endl; 
	cout << "                                           Ingrese un numero para escoger su producto: "; 
	cin >> opcionProducto;
		
		switch (opcionProducto) {
		
		case 1: 
		nuevoobjeto("Realme GT 5G, 9,742.00", 1, 9742);
		break;
		
		case 2: 
		nuevoobjeto("Motorola Edge 30, 12,184.00", 1, 12184);
		break;
		
		case 3: 
		nuevoobjeto("Xiaomi Redmi Note 11, 4,859.0", 1, 4859);
		break;
		
		case 4: 
		nuevoobjeto("Poco F3 5G, 8,277.00", 1, 8277);
		break;
		
		case 5: 
		nuevoobjeto("Xiaomi Mi 11, 11,207.00", 1, 11207);
		break;
		
		default:
			{
			cout << "Opcion no valida "<< endl ;
			system("pause");
			return;
			break;
		}	
	}
		cout << endl ;
	    cout << "Producto agregado"<<endl<<endl;
	    system("pause");
		break;
	}
	


    break;
	}
	

	
		break;
	}
	
	case 2: {
	
	system("cls");
	cout<<"                                                -------------------------------------" <<endl;	
	cout <<"                                                ACCESORIOS PARA DISPOSITIVOS MOBILES" <<endl;
	cout<<"                                                -------------------------------------" <<endl;
	cout <<endl;
	cout <<"                                                     1 - Fundas para Celular" <<endl;
	cout <<endl;
	cout <<"                                                     2 - Auriculares" <<endl;
	cout <<endl;
	cout <<"                                                     3 - Cargadores" <<endl;
	cout <<endl;
	cout << "                                                      Ingrese una opcion: ";
	cin >> opcionProducto1;
	cout <<endl;
	switch(opcionProducto1)
	{
	case 1: {
	system("cls");	
	cout << "                                                       Fundas para Celular "<<endl <<endl;
    cout << endl;
	cout << "                                        1 - Forro rigido transparente para iphone 11, 439.00" <<endl <<endl;
	cout << "                                        2 - Forro de ceramica para iphone 12, 683.00" <<endl <<endl;
	cout << "                                        3 - Forro transparente para huawei p40 lite, 952.00" <<endl <<endl;
	cout << "                                        4 - Forro para samsung a71 2019, 1,196.00" <<endl <<endl;
	cout << "                                        5 - Forro para iphone se 2020, 708" <<endl <<endl;
	cout << "                                        0 - Salir" <<endl <<endl;
	cout << "                                               Ingrese un numero para escoger su producto: "; 
	cin >> opcionProducto;
		
		switch (opcionProducto) {
		
		case 1: 
		nuevoobjeto("Forro rigido transparente para iphone 11, 439.00", 1, 439);
		break;
		
		case 2: 
		nuevoobjeto("Forro de ceramica para iphone 12, 683.00", 1, 683);
		break;
		
		case 3: 
		nuevoobjeto("Forro transparente para huawei p40 lite, 952.00", 1, 952);
		break;
		
		case 4: 
		nuevoobjeto("Forro para samsung a71 2019, 1196", 1, 1196);
		break;
		
		case 5: 
		nuevoobjeto("Forro para iphone se 2020, 708", 1, 708);
		break;
		
		default:
			{
			cout << "Opcion no valida "<< endl ;
			system("pause");
			return;
			break;
		}	
	}
		cout << endl ;
	    cout << "Producto agregado"<<endl<<endl;
	    system("pause");
		break;
	}
	
	case 2: {
	system("cls");	
	cout << "                                                       Auriculares" <<endl <<endl;
    cout << endl;
	cout << "                                 1 - Auriculares Sony MDR-EX110A con microfono, Por cable, 488.00" <<endl<<endl;
	cout << "                                 2 - SAMSUNG Auriculares con cable sintonizado por AKG, Por cable, 293.00" <<endl<<endl;
	cout << "                                 3 - Auriculares huawei freelace, Por cable, 2417.00" <<endl <<endl;
	cout << "                                 4 - Auriculares Sony WFXB700B, Inalambricos, 3,149.00" <<endl <<endl;
	cout << "                                 5 - Auriculares samsung buds 2 Pro, Inalambricos, 2661.00" <<endl <<endl;
	cout << "                                 6 - Apple Airpods Pro 2021, Inalambricos, 4,370.00" <<endl <<endl;
	cout << "                                 0 - Salir" <<endl <<endl;
		
	cout << "                                       Ingrese un numero para escoger su producto: "; 
	cin >> opcionProducto;
		
		switch (opcionProducto) {
		
		case 1: 
		nuevoobjeto("Auriculares Sony MDR-EX110A con microfono, 488.00", 1, 483);
		break;
		
		case 2: 
		nuevoobjeto("SAMSUNG Auriculares con cable sintonizado por AKG, 293.00", 1, 293);
		break;
		
		case 3: 
		nuevoobjeto("Auriculares huawei freelace, 2417.00", 1, 2417);
		break;
		
		case 4: 
		nuevoobjeto("Auriculares Sony WFXB700B, 3,149.00", 1, 3419);
		break;
		
		case 5: 
		nuevoobjeto("Auriculares samsung buds 2 Pro, 2661.00", 1, 2661);
		break;
		
		case 6: 
		nuevoobjeto("Apple Airpods Pro 2021, 4,370.00", 1, 4370);
		break;
		
		default:
			{
			cout << "Opcion no valida "<< endl ;
			system("pause");
			return;
			break;
		}	
	}
		cout << endl ;
	    cout << "Producto agregado"<<endl<<endl;
	    system("pause");
		break;
	

	}
	
	case 3: {
	system("cls");	
	cout << "                                                       Cargadores " <<endl<<endl;
    cout << endl;
	cout << "                                        1 - Cargador Huawei de 65v tipo C, 1,500.00" <<endl<<endl;
	cout << "                                        2 - Cargador Samsung de 55v tipo C, 1,300.00" <<endl<<endl;
	cout << "                                        3 - Cargador Samsung de 45v tipo C, 1,196.00" <<endl<<endl;
	cout << "                                        4 - Cargador LG de 33v tipo C, 800.00" <<endl<<endl;
	cout << "                                        5 - Cargador Apple de 18v lightning, 1,673.00" <<endl<<endl;
	cout << "                                        0 - Salir" <<endl<<endl;
		
	cout << "                                          Ingrese un numero para escoger su producto: "; 
	cin >> opcionProducto;
		
		switch (opcionProducto) {
		
		case 1: 
		nuevoobjeto("Cargador de 65v tipo C, 1,500.00", 1, 1500);
		break;
		
		case 2: 
		nuevoobjeto("Cargador de 55v tipo C, 1,300.00", 1, 1300);
		break;
		
		case 3: 
		nuevoobjeto("Cargador de 45v tipo C Samsung, 1,196.00", 1, 1196);
		break;
		
		case 4: 
		nuevoobjeto("Cargador de 33v tipo C, 800.00", 1, 800);
		break;
		
		case 5: 
		nuevoobjeto("Cargador de 18v tipo lightning, 1,673.00", 1, 1673);
		break;
		
		default:
			{
			cout << "Opcion no valida "<< endl ;
			system("pause");
			return;
			break;
		}	
	}
		cout << endl ;
	    cout << "Producto agregado"<<endl<<endl;
	    system("pause");
		break;
	}
	


    break;
	}
	

	default:
		break;
	}
	
	
    }
}

