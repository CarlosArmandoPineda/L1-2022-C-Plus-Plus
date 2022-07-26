#include <iostream>
#include "clientes.h"
#include "juego.h"

using namespace std;

string arregloRentas[100];
int ultimaLinea = 0;

void rentar() {
	system("cls");
	
	string codigoCliente = "";
	string nombreCliente = "";
	
	string codigoJuego = "";
	string nombreJuego = "";
	
	char continuar = 'n';
	
	while(true) {
	     cout << "Ingrese el codigo del cliente: ";
	     cin >> codigoCliente;
 
	     nombreCliente = buscarCliente(codigoCliente);
	
	     if (nombreCliente != ""){
		     cout <<endl;
		     cout << nombreCliente <<endl;
		     break;
         } else {
         	cout << "No se encontro el cliente, desea continuar? s/n" <<endl;
         	cin >> continuar;
         	
         	if (continuar == 'n' || continuar == 'N' ){
         		return;
			 }
		 }
	}
	


    while(true) {
	     cout << "Ingrese el codigo del juego: ";
	     cin >> codigoJuego;
 
	     nombreJuego = buscarJuego(codigoJuego);
	
	     if (nombreJuego != ""){
		     cout <<endl;
		     cout << nombreJuego <<endl;
		     break;
         } else {
         	cout << "No se encontro el Juego, desea continuar? s/n" <<endl;
         	cin >> continuar;
         	
         	if (continuar == 'n' || continuar == 'N' ){
         		return;
			 }
		 }
	}
	
    arregloRentas[ultimaLinea] = codigoCliente + " | " +nombreCliente + " - " + codigoJuego + " | " + nombreJuego;
    ultimaLinea++;
    
    system("pause");
}
	
