//
// Created by MARLON MEJIA on 2/07/2019.
//

#include "Fichas.h"


Fichas::Fichas(colores color,int pos) {
    this->color = color;
    this->FirstTime = true;
    this->posicion_juego=-1;
    this->setPosicion_mapa(pos);
    pieza = sf::CircleShape(TAM_FICHA);
    if(color==colores::verde){
        pieza.setFillColor(sf::Color(5,76,0));
    }
    else if(color==colores::amarillo){
        pieza.setFillColor(sf::Color(204,204,0));
    }
    else if(color==colores::azul){
        pieza.setFillColor(sf::Color(0,0,139));
    }
    else if(color==colores::rojo){
        pieza.setFillColor(sf::Color(139,0,0));
    }




}