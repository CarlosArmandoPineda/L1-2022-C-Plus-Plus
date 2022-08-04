#include <iostream>

using namespace std;

double impuesto = 0.15;
double total = 0;
double subtotal = 0;
string listaProductos;

void agregarProducto(string descripcion, int cantidad, double precio)
{
	listaProductos = listaProductos + descripcion + '\n';
	subtotal = subtotal + (cantidad * precio);
	total = subtotal + (subtotal * impuesto);
}

void imprimirFactura()
{
	system("cls");
	cout << "*******" << endl;
	cout << "Factura" << endl;
	cout << "*******" << endl;
	cout << endl;

	cout << "Productos: " << endl;
	cout << listaProductos;

	cout << endl;
	cout << "Subtotal: " << subtotal;
	cout << endl;
	cout << endl;
	cout << "Total: " << total;
	cout << endl;
	cout << endl;
	system("Pause");
}