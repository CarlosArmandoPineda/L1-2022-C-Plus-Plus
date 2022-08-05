#include <iostream>
 
using namespace std;

double subtotal = 0;
double total1 = 0;
double total2 = 0;
double impuesto = 0.15;
double envio = 200;

string listado;

void nuevoobjeto(string descripcion, int cantidad, double precio)
{
	listado = listado + descripcion + '\n' + '\n';
	subtotal=subtotal + (cantidad * precio);
	total1 = subtotal + (subtotal * impuesto);
	total2 = (subtotal  + (subtotal * impuesto)) + envio;
	
}

string NombreyApellido(string nombre, string apellido)
{
	return nombre+ " " +apellido;
}


void imprimirFacturaEnvio() {
	
	string nombre;
	string apellido;
	string correo;
	string numero;
	string hora;
	string fecha;
	string ciudad;
	string colonia;
	string numerodecasa;
	string nidentidad;
	int opcion = 0;
	
	system("cls");
	cout <<"                                                 ----------------------"<<endl;
	cout << "                                                 Seleccione una opcion: " <<endl;
	cout <<"                                                 ----------------------"<<endl;
	cout <<endl;
	cout << "                                                 1 - Factura con envio. " <<endl;
	cout <<endl;
	cout << "                                                 2 - Factura sin envio. " <<endl;
	cout <<endl;
	cout << "                                                 3 - Productos adquiridos hasta el momento. " <<endl;
	cout<<endl;
	cout << "                                                 4 - Restaurar compras: " <<endl;
	
	cout <<endl;
	cout << "                                                    Ingrese una opcion: ";
	cin >> opcion;
	
	if(opcion == 1)
	{
	system("cls");
	cout << "En la siguiente pantalla se le pedira que ingrese ciertos datos para el envio: " <<endl <<endl;
	cout << "Ingrese su Primer Nombre: ";
	cin >> nombre;
	system("cls");
	cout << "En la siguiente pantalla se le pedira que ingrese ciertos datos para el envio: " <<endl <<endl;
	cout << "Ingrese su Primer Apellido: ";
	cin >> apellido;
	system("cls");
	cout << "En la siguiente pantalla se le pedira que ingrese ciertos datos para el envio: " <<endl <<endl;
	cout << "Ingrese su Correo Electronico: ";
	cin >> correo;
	system("cls");
	cout << "En la siguiente pantalla se le pedira que ingrese ciertos datos para el envio: " <<endl <<endl;
	cout << "Ingrese su Numero de Telefono: ";
	cin >> numero;
	system("cls");
	cout << "En la siguiente pantalla se le pedira que ingrese ciertos datos para el envio: " <<endl <<endl;
	cout << "Ingrese su Numero de Identidad: ";
	cin >> nidentidad;
	system("cls");
	cout << "En la siguiente pantalla se le pedira que ingrese ciertos datos para el envio: " <<endl <<endl;
	cout << "Hora a la que desea recibir su pedido( Use el formato de 24H a la hora de ingresar la hora): ";
	cin >> hora;
	system("cls");
	cout << "En la siguiente pantalla se le pedira que ingrese ciertos datos para el envio: " <<endl <<endl;
	cout << "Fecha en la que desea recibir su pedido (use / para separar el dia, mes y año): ";
	cin >> fecha;
	system("cls");
	cout << "En la siguiente pantalla se le pedira que ingrese ciertos datos para el envio: " <<endl <<endl;
	cout << "Ingrese la Ciudad de envio (Use guion bajo para marcar espacios): ";
	cin >> ciudad;
	system("cls");
	cout << "En la siguiente pantalla se le pedira que ingrese ciertos datos para el envio: " <<endl <<endl;
	cout << "Ingrese su Residencial o Colonia de envio (Use guion bajo para marcar espacios): ";
	cin >> colonia;
	system("cls");
	cout << "En la siguiente pantalla se le pedira que ingrese ciertos datos para el envio: " <<endl <<endl;
	cout << "Ingrese el numero de su casa para el envio. (Use guion bajo para marcar espacios): ";
	cin >> numerodecasa;
	
	
    system("cls");
	cout<<endl;
    cout<<"                  FACTURA  "<<endl;
	cout<<endl;	
	cout<<endl;
	cout<<"             Hola " <<NombreyApellido(nombre, apellido)<<endl;
	cout <<endl;
	cout<<"     ¡Gracias por tu compra a Innovatech!  "<<endl;
	cout <<endl;
	cout <<"             Datos del Cliente:" <<endl;
	cout <<endl;
	cout <<" Facturado a:" << NombreyApellido( nombre, apellido) <<endl;
	cout <<" Correo:" << correo <<endl;
	cout <<" Numero de Telefono:" << numero <<endl;
	cout <<" Numero de identidad:" << nidentidad <<endl;
	cout <<" Hora de Entrega:" << hora <<endl;
	cout <<" Fecha de Entrega:" << fecha <<endl;
	cout <<" La direccion de entrega es: " << ciudad << ", " << colonia << ", " << numerodecasa;
	
	cout <<endl;
	cout <<endl;
	cout << "          Descripcion del Producto:" <<endl;
	cout <<endl;
	cout<<listado;
	cout<<endl;
	cout<<" SUBTOTAL (SIN ISV Y ENVIO): LPS. " << subtotal;
	cout<<endl;
	cout<<" TOTAL (ISV + ENVIO): LPS. " <<total2;
	cout<<endl;
	cout<<endl;
	cout <<" Estamos ubicados en Centro Comercial Prisa, Segundo Piso," <<endl;
	cout <<"      Segundo Piso, local #20, BLV. Morazan NO.41," <<endl;
	cout <<"              San Pedro Sula, Cortes." <<endl;
	system("pause");
    }else 
    if(opcion == 2)
    {
    system("cls");
	cout << "En la siguiente pantalla se le pedira que ingrese ciertos para reclamar su producto en la tienda: " <<endl <<endl;
	cout << "Ingrese su Primer Nombre: ";
	cin >> nombre;
	system("cls");
	cout << "En la siguiente pantalla se le pedira que ingrese ciertos para reclamar su producto en la tienda: " <<endl <<endl;
	cout << "Ingrese su Primer Apellido: ";
	cin >> apellido;
	system("cls");
	cout << "En la siguiente pantalla se le pedira que ingrese ciertos para reclamar su producto en la tienda: " <<endl <<endl;
	cout << "Ingrese su Numero de Telefono: ";
	cin >> numero;
	system("cls");
	cout << "En la siguiente pantalla se le pedira que ingrese ciertos para reclamar su producto en la tienda: " <<endl <<endl;
	cout << "Ingrese su Numero de Identidad: ";
	cin >> nidentidad;
	system("cls");
	cout << "En la siguiente pantalla se le pedira que ingrese ciertos para reclamar su producto en la tienda: " <<endl <<endl;
	cout << "Hora en la que desea venir su pedido(Use Formato 24H a la hora de ingresar la hora): ";
	cin >> hora;
	system("cls");
	cout << "En la siguiente pantalla se le pedira que ingrese ciertos datos para el envio: " <<endl <<endl;
	cout << "Fecha en la que desea venir por su producto (Use / para el dia, mes y año): ";
	cin >> fecha;
	
	
    system("cls");
	cout<<endl;
	cout<<"                  FACTURA  "<<endl;
	cout<<endl;	
	cout<<endl;
	cout<<"             Hola " <<NombreyApellido(nombre, apellido)<<endl;
	cout <<endl;
	cout<<"     ¡Gracias por tu compra a Innovatech!  "<<endl;
	cout <<endl;
	cout <<"             Datos del Cliente:" <<endl;
	cout <<endl;
	cout << " Facturado a:" << NombreyApellido( nombre, apellido) <<endl;
	cout << " Numero de Telefono:" << numero <<endl;
	cout << " Numero de identidad:" << nidentidad <<endl;
	cout << " Hora establecida para reclamo de producto:" << hora <<endl;
	cout << " Fecha establecida para reclamo de producto:" << fecha <<endl;
	
	cout <<endl;
	cout <<endl;
	cout << "          Descripcion del Producto:" <<endl;
	cout <<endl;
	cout<<listado;
	cout<<endl;
	cout<< " SUBTOTAL (SIN ISV): LPS. " << subtotal;
	cout<<endl;
	cout<< " TOTAL (CON ISV): LPS. " <<total1;
	cout<<endl;
	cout<<endl;
	cout <<" Estamos ubicados en Centro Comercial Prisa, Segundo Piso," <<endl;
	cout <<"      Segundo Piso, local #20, BLV. Morazan NO.41," <<endl;
	cout <<"              San Pedro Sula, Cortes." <<endl;
	system("pause");
    	
	}else
	if(opcion == 3)
	{
		system("cls");
		cout <<endl;
		cout <<endl;
		cout << "                                            Productos adquiridos hasta el momento: " <<endl <<endl; 
		cout << listado <<endl;
		system("pause");
	}else
	if(opcion == 4 )
	{
		system("cls");
		cout <<endl;
		cout <<endl;
		cout <<endl;
		cout <<endl;
		cout <<endl;
		cout << "                                                   Ha reiniciado sus compras." <<endl <<endl;
		listado = "";
		subtotal = subtotal - subtotal;
		total1 = total1 - total1;
		total2 = total2 - total2;
		system("pause");
	}
		
}




