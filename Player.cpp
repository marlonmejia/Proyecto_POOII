//
// Created by MARLON MEJIA on 2/07/2019.
//

#include "Player.h"

Player::Player(int jugador_actual, int PosX, int PosY) {

    this->jugar = false;

    switch(jugador_actual){
        case(0):{
            this->ColorPlayer=colores::verde;
            break;
        }

        case(1):{
            this->ColorPlayer=colores::amarillo;
            break;
        }

        case(2):{
            this->ColorPlayer=colores::azul;
            break;
        }

        case(3):{
            this->ColorPlayer=colores::rojo;
            break;
        }
    }
    this->Rellenar(PosX,PosY);

}
void Player::draw(sf::RenderTarget *window) {
    for(int i=0;i<fichas.size();i++){
        window->draw(fichas[i].getPieza());
    }
}

void Player::Rellenar(int PosX, int PosY){
    for(int i=0;i<CANT_FICHAS;i++){
        fichas.push_back(Fichas(this->ColorPlayer,i));
    }

    this->SetPosiciones(PosX,PosY);

}

void Player::SetPosiciones(int PosX, int PosY) {

    this->fichas[0].getPieza().setPosition(PosX,PosY);
    this->fichas[1].getPieza().setPosition(PosX+60,PosY+56);
    this->fichas[2].getPieza().setPosition(PosX,PosY+113);
    this->fichas[3].getPieza().setPosition(PosX-60,PosY+56);

}

void Player::move(){
    //fichas[0].set
}