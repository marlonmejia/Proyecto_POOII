
#ifndef LUDO_PROJECT_TABLERO_H
#define LUDO_PROJECT_TABLERO_H

#include "Casillas.h"

#include <vector>

const int X_POS_VERDE_INICIAL = 175,Y_POS_VERDE_INICIAL = 120,
        X_POS_AMARILLO_INICIAL = 685,Y_POS_AMARILLO_INICIAL = 120,
        X_POS_ROJO_INICIAL = 175,Y_POS_ROJO_INICIAL = 628,
        X_POS_AZUL_INICIAL = 685,Y_POS_AZUL_INICIAL = 628;


class Tablero {

    std::vector<Casillas> casillasBlacas;
    std::vector<Casillas> casillasVerdes;
    std::vector<Casillas> casillasAmarillas;
    std::vector<Casillas> casillasAzules;
    std::vector<Casillas> casillasRojas;

public:
    Tablero();
    template <typename T>
    void setAllPositions( T &vectorColor, int posX, int posY);

    std::vector<Casillas> &getCasillasVerdes () {return casillasVerdes;}
    std::vector<Casillas> &getCasillasAmarillas () {return casillasAmarillas;}
    std::vector<Casillas> &getCasillasAzules () {return casillasAzules;}
    std::vector<Casillas> &getCasillasRojas () {return casillasRojas;}
    std::vector<Casillas> &getCasillasBlancas () {return casillasBlacas;}
};


#endif //LUDO_PROJECT_TABLERO_H
