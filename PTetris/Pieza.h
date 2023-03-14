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

	static int numeroPiezasCreadas;

	Pieza();
	Pieza(string _nombre, string _color);
	Pieza(float);

	string getNombre() { return nombre; }
	void setNombre(string _nombre) { nombre = _nombre; }
	
	int getTiles() { return numeroTiles; }
	void setTiles(int _numeroTiles) { numeroTiles = _numeroTiles; }

	string getColor() { return color; }

	virtual void rotar(int _angulo) = 0;
	
	void acelerar(float _velocidad);
	void moverHorizontalmente(int _direccion);

protected:

};

