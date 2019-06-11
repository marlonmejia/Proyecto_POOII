//
// Created by Ivan on 31/05/2019.
//

#include "Ficha.cpp"
#include "Recorrido.cpp"
class Jugadores{
private:
    string nombre;
    int color;

public:
    Jugadores(string nombre,int color){
        this->color=color;
        this->nombre=nombre;
    }
    void Jugar(Ficha ficha,int movimiento){

    }
    Ficha selecFichaInGame(){

    }
    ~Jugadores();
};