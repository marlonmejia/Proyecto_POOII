//
// Created by Ivan on 31/05/2019.
//

#include "Tablero.cpp"
#include "Dado.cpp"
#include "Jugadores.cpp"
#include <iostream>
using namespace std;
using namespace sf;

class Juego{
private:
    int numJugadores;

public:
    Juego(int numJugadores){
        this->numJugadores=numJugadores;

    }
    void iniciarJuego() {
        vector<Ficha> recorrido1;
        vector<Ficha> recorrido2;
        vector<Ficha> recorrido3;
        vector<Ficha> recorrido4;

        Recorrido Azul( recorrido1);
        Azul.setTamano(57);
        Recorrido Amarillo( recorrido2);
        Amarillo.setTamano(57);
        Recorrido Verde( recorrido3);
        Verde.setTamano(57);
        Recorrido Rojo( recorrido4);
        Rojo.setTamano(57);
        Tablero t;
        Dado d;
        t.mostrar();

    }
    void siguienteTurno(){

    }
    void CrearJugadores(int x){

    }
    ~Juego();

};

