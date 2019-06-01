//
// Created by Ivan on 31/05/2019.
//
#include <iostream>
using namespace std;
class Casilla{
private:
  int x;
  int y;
  bool disponible;
public:
Casilla(int x,int y,bool disponible){
        this->x=x;
        this->y=y;
        this->disponible=disponible;
}

    virtual void mostrar()=0;
    ~Casilla();
};

class CasillaCasa:public Casilla{
public:
    void mostrar(){

    }
};

class CasillaInicio:public Casilla{
public:
  void mostrar(){

  }
};
class CasillaRecorido:public Casilla{
public:
  void mostrar(){

  }
};
class CasillaZonaSegura:public Casilla{
public:
  void mostrar(){

  }
};
class CasillaDestinoFinal:public Casilla{
public:
  void mostrar(){

  }
};
