//
// Created by Ivan on 25/06/2019.
//

#ifndef LUDO_MASTER_MENU_H
#define LUDO_MASTER_MENU_H

#include <iostream>
#include "SFML/Graphics.hpp"

#define MAX_NUMBER_OF_ITEM 4

class Menu {
private:
    int selectedItemIdex=0;
    sf::Text menu[MAX_NUMBER_OF_ITEM];
    sf::Font fuente;
public:
    Menu(float width,float height );
    void ventana(sf::RenderWindow &window);
    void MoveUp();
    void MoveDown();
    int GetIndex(){ return selectedItemIdex;}
    ~Menu();
};


#endif //LUDO_MASTER_MENU_H
