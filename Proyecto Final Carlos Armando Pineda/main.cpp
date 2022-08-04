#include <iostream>
#include <stdio.h>
#include <windows.h>

using namespace std;

extern void inicio();

int main(int argc, char** argv) {
	
	system("color F0");
	
	int segundos =2;
	for(int i =0; i<=12; i++)
	    cout << "\n";
	cout <<"                                                 INGRESANDO A INNOVATECH"<<endl;
	for(int i =0; i<=119; i++)
	{
		cout<<char(219);
		Sleep(segundos*1000/80);
	}
	cout <<"\n                                                       Bienvenido";
	inicio();
	
	return 0;
}
