#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Pieza
{
protected:
	string color;
private:
	string nombre;
	string forma;
	int alto;
	int ancho;
	int posicion_X;
	int posicion_Y;
	float velocidad;
	bool enMovimiento;
	int anguloRotacion;
	bool conRotacion;
	int gradosRotacionHorizontal;
	int gradosRotacionVertical;
	int numeroTiles;
	vector<vector<bool>> apariencia;
public:
	Pieza();
	Pieza(string _nombre, string _color);
	Pieza(float);

	string getNombre() { return nombre; }
	void setNombre(string _nombre) { nombre = _nombre; }
	
	string getColor() { return color; }

	void rotar(int _angulo);
	void acelerar(float _velocidad);
	void moverHorizontalmente(int _direccion);



protected:

};

