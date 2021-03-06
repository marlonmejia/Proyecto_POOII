//
// Created by MARLON MEJIA on 2/07/2019.
//

#ifndef PROYECTO_PLAYER_H
#define PROYECTO_PLAYER_H

#include <SFML/Graphics.hpp>

#include <iostream>

#include "Fichas.h"
#include <vector>

const int CANT_FICHAS = 4;


class Player {
private:
    std::vector<Fichas> fichas;
    colores ColorPlayer;
    bool jugar;
public:
    Player(int jugador_actual, int PosX, int PosY);
    void Rellenar(int PosX, int PosY);
    void SetPosiciones(int PosX, int PosY);
    void draw(sf::RenderTarget *window);
    void move();
    inline std::vector<Fichas>& getFichas(){return this->fichas;}
    inline void setJugar(bool jugar){this->jugar = jugar;}
    inline bool getJugar(){return jugar;}
};

#endif //PROYECTO_PLAYER_H
