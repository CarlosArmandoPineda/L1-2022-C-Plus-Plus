#include <iostream>
#include <string>
using namespace std;

double subtotal = 0;
double total1 = 0;
double total2 = 0;
double impuesto = 0.15;
double envio = 200;
int o = 0;

string listado;

void nuevoobjeto(string descripcion, int cantidad, double precio)
{
	cout << "Si desea agregar un producto pulse 1, de lo contrario si desea eliminarlo pulse 2: " <<endl;
	cin >> o;
	
	if (o == 1){
	listado = listado + descripcion + '\n'; 
	subtotal= subtotal + (cantidad * precio);
	total1 = subtotal + (subtotal * impuesto);
	total2 = (subtotal  + (subtotal * impuesto)) + envio;
	}else
	if (o == 2){
		listado = listado + descripcion + '\n'; 
	    subtotal= subtotal - (cantidad * precio);
	    total1 = subtotal - (subtotal * impuesto);
	    total2 = (subtotal  - (subtotal * impuesto));
		
	}
	
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
	cout << "Eliga su metodo de facturacion." <<endl <<endl;
	cout << "1 - Factura con envio: " <<endl;
	cout << "2 - Factura sin envio: " <<endl;
	cout << "3 - Productos hasta el momento: " <<endl;
	
	cout << "Ingrese una opcion: " <<endl;
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
	cout<<"FACTURACION CON SERVICIO DE ENVIO INCLUIDO"<<endl;
	cout<<endl;
	cout<<endl;
	cout <<endl;
	cout <<"Cliente:" << NombreyApellido( nombre, apellido) <<endl;
	cout <<"Correo del Cliente:" << correo <<endl;
	cout <<"Numero de Telefono del Cliente:" << numero <<endl;
	cout <<"Numero de identidad del Cliente:" << nidentidad <<endl;
	cout <<"Hora de Entrega:" << hora <<endl;
	cout <<"Fecha de Entrega:" << fecha <<endl;
	cout <<"La direccion de entrega es: " << ciudad << ", " << colonia << ", " << numerodecasa;
	
	cout <<endl;
	cout <<endl;
	cout<<listado;
	cout<<endl;
	cout<<"SUBTOTAL (SIN ISV Y ENVIO): LPS " << subtotal;
	cout<<endl;
	cout<<"TOTAL (ISV + ENVIO): LPS " <<total2;
	cout<<endl;
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
	cout<<"FACTURACION SIN SERVICIO DE ENVIO INCLUIDO"<<endl;
	cout<<endl;
	cout<<endl;
	cout <<endl;
	cout <<"Cliente:" << NombreyApellido( nombre, apellido) <<endl;
	cout <<"Numero de Telefono del Cliente:" << numero <<endl;
	cout <<"Numero de identidad del Cliente:" << nidentidad <<endl;
	cout <<"Hora establecida para reclamo de producto:" << hora <<endl;
	cout <<"Fecha establecida para reclamo de producto:" << fecha <<endl;
	
	cout <<endl;
	cout <<endl;
	cout<<listado;
	cout<<endl;
	cout<<"SUBTOTAL (SIN ISV): LPS. " << subtotal;
	cout<<endl;
	cout<<"TOTAL (CON ISV): LPS. " <<total1;
	cout<<endl;
	system("pause");
    	
	}else
	if (opcion == 3)
	{
		system("cls");
		cout << listado;
		system("pause");
	}

}




