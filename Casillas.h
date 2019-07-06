//
// Created by Ivan on 25/06/2019.
//

#ifndef LUDO_MASTER_CASILLAS_H
#define LUDO_MASTER_CASILLAS_H

#include "Fichas.h"

struct Posiciones{
    int X,Y;
};


class Casillas {
private:
    Fichas *fichaCasilla;


public:
    Posiciones pos;
    Casillas();

};

class CasillaBlanca : public Casillas{
public:
    CasillaBlanca() : Casillas(){}
};

class CasillaVerde : public Casillas{
public:
    CasillaVerde() : Casillas(){}
};

class CasillaAmarillo : public Casillas{
public:
    CasillaAmarillo() : Casillas(){}
};

class CasillaAzul : public Casillas{
public:
    CasillaAzul() : Casillas(){}
};

class CasillaRojo : public Casillas{
public:
    CasillaRojo() : Casillas(){}
};



#endif //LUDO_MASTER_CASILLAS_H
