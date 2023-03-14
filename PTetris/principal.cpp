#include <iostream>
#include "Pieza.h"
#include "PiezaMutante.h"
#include "piezaTetramino.h"

using namespace std;

int main() {
	//Pieza pieza_l("eles", "#000000");
	//Pieza* pieza_l = new Pieza("L de cuatro tiles", "#000000");

	////cout << pieza_l.getNombre() << endl;
	//cout << pieza_l->getNombre() << endl;

	////pieza_l.setNombre("L de cuatro tiles");
	//pieza_l->setNombre("L de cuatro tiles");

	////pieza_l.rotar(90);
	//pieza_l->rotar(90);

	////cout << pieza_l.getNombre() << endl;
	//cout << pieza_l->getNombre() << endl;

	////cout << pieza_l.getColor() << endl;
	//cout << pieza_l->getColor() << endl;

	//cout << "--------------------------" << endl;
	//	
	PiezaMutante pieza_m("Pieza mutante sin nombre, jjejejejej", "#OOOOOO transparente", 2, true);
	PiezaMutante pieza_m2("Pieza mutante sin nombre 2, jojojojo", "#FFFFOO violeta", 2, true);

	cout << "numero de copias: " << pieza_m.getNumeroCopias() << endl;
	cout << "modificar forma?: " << pieza_m.getModificarForma() << endl;
	cout << "color de la pieza mutante" << pieza_m.getColor() << endl;
	cout << pieza_m.getNombre() << endl;
	pieza_m.setNombre("Pieza mutante L de cuatro tiles");
	pieza_m.rotar(90);
	cout << pieza_m.getNombre() << endl;

	pieza_m.cambiarForma(2);

	PiezaTetramino* pieza_t = new PiezaTetramino();
	pieza_t->rotar(45);

	PiezaTetramino* pieza_t2 = new PiezaTetramino();

	cout << "se han creado " << Pieza::numeroPiezasCreadas << " hasta el momento" << endl;

}

//
//
//
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	string nombre = "nombre prueba";
//	int a = 1;
//	int b = 2;
//	int c = 0;
//	
//	int* p = nullptr;
//
//	p = &a;
//	*p = 10;
//	c = a + b;
//
//	cout << "&nombre = " << &nombre << endl;
//	cout << "a = " << a << endl;
//	cout << "&a = " << &a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//	cout << "p = " << p << endl;
//	cout << "*p = " << *p << endl;
//
//	return 0;
//}