//
// Created by Ivan on 31/05/2019.
//
#include <vector>
#include "Ficha.cpp"
class Recorrido{
private:
    vector<Ficha> recorrido;
public:
    Recorrido(vector<Ficha> recorrido){
        this->recorrido=recorrido;

    }
    vector<Ficha> setTamano(int zise){
        recorrido.reserve(zise);
        return recorrido;
    }

    ~Recorrido();
};
