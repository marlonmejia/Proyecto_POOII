//
// Created by Ivan on 25/06/2019.
//

#ifndef LUDO_MASTER_FICHAS_H
#define LUDO_MASTER_FICHAS_H
#include <SFML/Graphics/CircleShape.hpp>

const int TAM_FICHA = 20;
const int MAX_MOV = 56;
enum class colores{verde,amarillo,azul,rojo};



class Fichas {
private:
    int posicion_mapa;
    int posicion_juego;
    bool FirstTime;
    colores color;
    sf::CircleShape pieza;
public:
    void setPosicion_mapa(int posicion){this->posicion_mapa = posicion;}
    int getPosicion_mapa(){return posicion_mapa;}
    void setPosicion_juego(int posicion){this->posicion_juego = posicion;}
    int getPosicion_juego(){return posicion_juego;}
    bool getFirstTime(){return FirstTime;}
    void setFirstTime(bool FirstTime){this->FirstTime=FirstTime;}
    Fichas(colores color,int pos);
    colores getColor(){return color;}
    void setColor(colores color){this->color=color;}
    sf::CircleShape& getPieza(){return pieza;}
    inline const sf::FloatRect getGlobalBounds() const {return pieza.getGlobalBounds();}

};


#endif //LUDO_MASTER_FICHAS_H
