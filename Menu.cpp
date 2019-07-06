//
// Created by Ivan on 25/06/2019.
//

#include "Menu.h"

Menu::Menu(float width, float height)
{
    if(!fuente.loadFromFile("Images/FontFile.ttf")){
        //Error
    }
    menu[0].setFont(fuente);
    menu[0].setFillColor(sf::Color::Red);
    menu[0].setString("1 Player");
    menu[0].setPosition(sf::Vector2f(width/2,height/(MAX_NUMBER_OF_ITEM+1)*1));

    menu[1].setFont(fuente);
    menu[1].setFillColor(sf::Color::White);
    menu[1].setString("2 Players");
    menu[1].setPosition(sf::Vector2f(width/2,height/(MAX_NUMBER_OF_ITEM+1)*2));

    menu[2].setFont(fuente);
    menu[2].setFillColor(sf::Color::White);
    menu[2].setString("3 Players");
    menu[2].setPosition(sf::Vector2f(width/2,height/(MAX_NUMBER_OF_ITEM+1)*3));

    menu[3].setFont(fuente);
    menu[3].setFillColor(sf::Color::White);
    menu[3].setString("4 Players");
    menu[3].setPosition(sf::Vector2f(width/2,height/(MAX_NUMBER_OF_ITEM+1)*4));

}

Menu::~Menu(){

}
void Menu::ventana(sf::RenderWindow &window) {
    for(int i=0;i<MAX_NUMBER_OF_ITEM;i++){
        window.draw(menu[i]);
    }
}
void Menu::MoveUp() {
    if(selectedItemIdex-1>=0){
        menu[selectedItemIdex].setFillColor(sf::Color::White);
        selectedItemIdex--;
        menu[selectedItemIdex].setFillColor(sf::Color::Red);
    }
}
void  Menu::MoveDown() {
    if(selectedItemIdex+1<MAX_NUMBER_OF_ITEM){
        menu[selectedItemIdex].setFillColor(sf::Color::White);
        selectedItemIdex++;
        menu[selectedItemIdex].setFillColor(sf::Color::Red);
    }
}
