#pragma once
#include "Pieza.h"
class PiezaTetramino :
    public Pieza
{
public:
    void rotar(int _grados) {
        cout << "Se ha rotado la pieza tetramino en " << _grados << " grados." << endl;
    }
};

