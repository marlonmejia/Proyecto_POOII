
#include "Tablero.h"

Tablero::Tablero() {

    casillasBlacas = std::vector<Casillas> (52,CasillaBlanca());
    casillasVerdes = std::vector<Casillas> (10,CasillaVerde());
    casillasAmarillas = std::vector<Casillas> (10,CasillaAmarillo());
    casillasAzules = std::vector<Casillas> (10,CasillaAzul());
    casillasRojas = std::vector<Casillas> (10,CasillaRojo());

    setAllPositions(casillasVerdes, X_POS_VERDE_INICIAL,Y_POS_VERDE_INICIAL);
    setAllPositions(casillasAmarillas, X_POS_AMARILLO_INICIAL,Y_POS_AMARILLO_INICIAL);
    setAllPositions(casillasAzules, X_POS_AZUL_INICIAL,Y_POS_AZUL_INICIAL);
    setAllPositions(casillasRojas, X_POS_ROJO_INICIAL,Y_POS_ROJO_INICIAL);

    for(int i=4;i<=8;i++){
        casillasVerdes[i].pos.X=93+(i-4)*55;     casillasVerdes[i].pos.Y=430;
    }

    for(int i=4;i<=8;i++){
        casillasAzules[i].pos.X=770-(i-4)*55;     casillasAzules[i].pos.Y=430;
    }

    for(int i=4;i<=8;i++){
        casillasAmarillas[i].pos.X=429;     casillasAmarillas[i].pos.Y=88+(i-4)*57;
    }

    for(int i=4;i<=8;i++){
        casillasRojas[i].pos.X=429;     casillasRojas[4].pos.Y=763-(i-4)*57;
    }

    for(int i=0;i<=4;i++){
        casillasBlacas[i].pos.X=93+i*57; casillasBlacas[i].pos.Y=373;
    }
    for(int i=5;i<=10;i++){
        casillasBlacas[i].pos.X=378; casillasBlacas[i].pos.Y=316-(i-5)*57;
    }

    casillasBlacas[11].pos.X=435; casillasBlacas[11].pos.Y=31;

    for(int i=12;i<=17;i++){
        casillasBlacas[i].pos.X=492; casillasBlacas[i].pos.Y=31+(i-12)*57;
    }

    for(int i=18;i<=23;i++){
        casillasBlacas[i].pos.X=550+57*(i-18); casillasBlacas[i].pos.Y=373;
    }

    casillasBlacas[24].pos.X=835; casillasBlacas[24].pos.Y=430;

    for(int i=25;i<=30;i++){
        casillasBlacas[i].pos.X=835-(i-25)*57; casillasBlacas[i].pos.Y=487;
    }

    for(int i=31;i<=36;i++){
        casillasBlacas[i].pos.X=492; casillasBlacas[i].pos.Y=544+(i-31)*57;
    }

    casillasBlacas[37].pos.X=435; casillasBlacas[37].pos.Y=825;

    for(int i=38;i<=43;i++){
        casillasBlacas[i].pos.X=378; casillasBlacas[i].pos.Y=825-(i-38)*57;
    }

    for(int i=44;i<=49;i++){
        casillasBlacas[i].pos.X=321-(i-44)*57; casillasBlacas[i].pos.Y=487;
    }

    for(int i=50;i<=51;i++){
        casillasBlacas[i].pos.X=36; casillasBlacas[i].pos.Y=430-(i-50)*57;
    }


}
template <typename T>
void Tablero::setAllPositions(T &vectorColor,int posX, int posY) {
    vectorColor[0].pos.X = posX;vectorColor[0].pos.Y = posY;
    vectorColor[1].pos.X = posX+60;vectorColor[1].pos.Y = posY+56;
    vectorColor[2].pos.X = posX;vectorColor[2].pos.Y = posY+113;
    vectorColor[3].pos.X = posX-60;vectorColor[3].pos.Y = posY+56;

}
