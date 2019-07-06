//
// Created by Ivan on 25/06/2019.
//

#include "Dado.h"

Dado::Dado(){
    srand(time(nullptr));
    if(!dadoTexture.loadFromFile(DADO_DIR)){}
    dadoSprite.setTexture(dadoTexture);
    dadoSprite.setPosition(X_POS_DADO,Y_POS_DADO);
    dadoSprite.setScale(SCALE_DADO,SCALE_DADO);

    jugarDado = dadoWait::ready;
}

void Dado::girar() {
    valor = rand()%6+1;
}
