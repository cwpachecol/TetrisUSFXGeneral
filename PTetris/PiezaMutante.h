#pragma once
#include "Pieza.h"
class PiezaMutante :
    public Pieza
{
private:
    int numeroCopias;
    bool modificarForma;
public:
    //Constructores
    PiezaMutante(int, bool);
    PiezaMutante(string _nombre, string _color, int _numeroCopias, bool _modificarForma);
    //Metodos accesores

    int getNumeroCopias() { return numeroCopias; }
    bool getModificarForma() { return modificarForma; }


    //Metodos de la clase

    void copiarPieza(int _numeroCopias);
    void detenerPieza(int _tiempo);
    void cambiarForma(int _nuevaforma);
};

