//
// Created by Ivan on 31/05/2019.
//

#include "Tablero.cpp"
#include "Dado.cpp"
#include "Jugadores.cpp"
#include <iostream>
#include <vector>
using namespace std;
using namespace sf;

class Juego{
private:
    int numJugadores;
    int decicion;

public:
    Juego(int numJugadores,int decicion){
        this->numJugadores=numJugadores;
        this->decicion=decicion;
    }
    void iniciarJuego() {
        vector<Ficha> recorrido1;
        vector<Ficha> recorrido2;
        vector<Ficha> recorrido3;
        vector<Ficha> recorrido4;

        Recorrido Azul( recorrido1);
        Azul.setTamano(58);
        Recorrido Amarillo( recorrido2);
        Amarillo.setTamano(58);
        Recorrido Verde( recorrido3);
        Verde.setTamano(58);
        Recorrido Rojo( recorrido4);
        Rojo.setTamano(58);
        Tablero t;
        Dado d;
        t.mostrar();
        vector<Jugadores> turno;
        if(decicion==0){
            Jugadores player1("player1",0);
            turno.push_back(player1);
            Jugadores CPU1("CPU",1);
            turno.push_back(CPU1);
            Jugadores CPU2("CPU",2);
            turno.push_back(CPU2);
            Jugadores CPU3("CPU",3);
            turno.push_back(CPU3);
        }
        if(decicion==1){
            Jugadores player1("player1",0);
            turno.push_back(player1);
            Jugadores player2("player2",1);
            turno.push_back(player2);
            Jugadores CPU1("CPU",2);
            turno.push_back(CPU1);
            Jugadores CPU2("CPU",3);
            turno.push_back(CPU2);
        }
        if(decicion==2){
            Jugadores player1("player1",0);
            turno.push_back(player1);
            Jugadores player2("player2",1);
            turno.push_back(player2);
            Jugadores player3("player3",2);
            turno.push_back(player3);
            Jugadores CPU1("CPU",3);
            turno.push_back(CPU1);
        }
        if(decicion==3){
            Jugadores player1("player1",0);
            turno.push_back(player1);
            Jugadores player2("player2",1);
            turno.push_back(player2);
            Jugadores player3("player3",2);
            turno.push_back(player3);
            Jugadores player4("player4",3);
            turno.push_back(player4);
        }
        for(int i =0;i<4;i++){
            if(i==3){
                i=0;
            }
            int n=d.Lanzar();
            if(n==6){
                Event evento;
                switch(evento.type){
                    case Keyboard::M:
                        if(turno[i].getColor()=="Rojo"){

                        }
                        if(turno[i].getColor()=="Azul"){

                        }
                        if(turno[i].getColor()=="Amarillo"){

                        }
                        if(turno[i].getColor()=="Verde"){

                        }
                        break;

                }
            }
        }
    }

    void CrearJugadores(int x){

    }

    ~Juego();

};

