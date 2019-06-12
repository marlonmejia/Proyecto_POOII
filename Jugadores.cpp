//
// Created by Ivan on 31/05/2019.
//

#include "Ficha.cpp"
#include "Recorrido.cpp"
#include <vector>
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
    string getColor(){
        if(color==0){
            return "Rojo";
        }
        if(color==1){
            return "Azul";
        }
        if(color==2){
            return "Amarillo";
        }
        if(color==3){
            return "verde";
        }
    }
    str

    ~Jugadores();
};