#include "Pieza.h"

int Pieza::numeroPiezasCreadas = 0;

Pieza::Pieza()
{
	nombre = "Sin nombre";
	forma = "Cuadrado pequeño";
	posicion_X = 100;
	posicion_Y = 50;
	color = "#FFFFFF";
	velocidad = 0.01f;
	enMovimiento = true;
	numeroPiezasCreadas++;
}

Pieza::Pieza(string _nombre, string _color)
{
	nombre = _nombre;
	forma = "Cuadrado pequeño";
	posicion_X = 100;
	posicion_Y = 50;
	color = _color;
	velocidad = 0.01f;
	enMovimiento = true;
	numeroPiezasCreadas++;
}

Pieza::Pieza(float _velocidad):velocidad(_velocidad)
{
	nombre = "Sin nombre";
	forma = "Cuadrado pequeño";
	posicion_X = 100;
	posicion_Y = 50;
	color = "#FFFFFF";
	//velocidad = _velocidad;
	enMovimiento = true;
	numeroPiezasCreadas++;
}

void Pieza::acelerar(float _velocidad)
{
	cout << "Esta funcion incrementa la velocidad de caida de una figura" << endl;
}

void Pieza::moverHorizontalmente(int _direccion)
{
	cout << "Esta funcion permite mover la figurar hacia la derecha o izquierda." << endl;
}
