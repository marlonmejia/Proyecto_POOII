//
// Created by Ivan on 8/06/2019.
//
#include <SFML/Graphics.hpp>
#include <iostream>
#define MAX_NUMBER_OF_ITEM 4
using namespace std;
using namespace sf;
class Menu{
private:
    int selectedItemIndex;
    Font fuente;
    Text texto[MAX_NUMBER_OF_ITEM];
public:
    Menu(float W,float H){
        if(!fuente.loadFromFile("C:/Users/Ivan/POO2/arial.ttf")){
           //Error al cargar fuente
        }
        texto[0].setFont(fuente);
        texto[0].setFillColor(Color::Red);
        texto[0].setString("1 player");
        texto[0].setPosition(Vector2f(W/2,H/(MAX_NUMBER_OF_ITEM+1)*1));

        texto[1].setFont(fuente);
        texto[1].setFillColor(Color::White);
        texto[1].setString("2 player");
        texto[1].setPosition(Vector2f(W/2,H/(MAX_NUMBER_OF_ITEM+1)*2));

        texto[2].setFont(fuente);
        texto[2].setFillColor(Color::White);
        texto[2].setString("3 player");
        texto[2].setPosition(Vector2f(W/2,H/(MAX_NUMBER_OF_ITEM+1)*3));

        texto[3].setFont(fuente);
        texto[3].setFillColor(Color::White);
        texto[3].setString("4 player");
        texto[3].setPosition(Vector2f(W/2,H/(MAX_NUMBER_OF_ITEM+1)*4));
    }
    void draw(RenderWindow &window){
        for(int i=0;i<MAX_NUMBER_OF_ITEM;i++) {
            window.draw(texto[i]);
        }
    }
    void Moveup(){
        if(selectedItemIndex-1>=0){
            texto[selectedItemIndex].setFillColor(Color::White);
            selectedItemIndex--;
            texto[selectedItemIndex].setFillColor(Color::Red);
        }


    }
    void Movedown(){
        if(selectedItemIndex+1<MAX_NUMBER_OF_ITEM){
            texto[selectedItemIndex].setFillColor(Color::White);
            selectedItemIndex++;
            texto[selectedItemIndex].setFillColor(Color::Red);
        }
    }
    int GetPressedItem(){
        return selectedItemIndex;
    }
    ~Menu();

};