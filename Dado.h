//
// Created by Ivan on 25/06/2019.
//

#ifndef LUDO_MASTER_DADO_H
#define LUDO_MASTER_DADO_H
#include <SFML/Graphics.hpp>
#include <stdlib.h>
#include <ctime>

const std::string DADO_DIR = "Images/dado.png";
const float SCALE_DADO = 0.25f;
const int X_POS_DADO = 886, Y_POS_DADO = 50;
enum class dadoWait{ready,blocked};


class Dado {
private:
    int valor=0;
    dadoWait jugarDado;
    sf::Texture dadoTexture;
    sf::Sprite dadoSprite;
public:
    Dado();
    void girar();
    int getValor(){return valor;}
    dadoWait& getjugarDado () {return jugarDado;}
    void setjugarDado(dadoWait jugarDado){this->jugarDado=jugarDado;}
    inline sf::Sprite& getdadoSprite(){return dadoSprite;}
    inline const sf::FloatRect getGlobalBounds() const {return dadoSprite.getGlobalBounds();}

};


#endif //LUDO_MASTER_DADO_H
