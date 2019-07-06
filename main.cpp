
#include <SFML/Graphics.hpp>
#include "Game.h"
#include "Menu.h"
int main() {

    sf::RenderWindow menu(sf::VideoMode(600,600),"Menu De Jugadores");
    Menu ventanaI(menu.getSize().x,menu.getSize().y);
    while(menu.isOpen()){
        sf::Event event;
        while(menu.pollEvent(event)){
            switch (event.type){
                case sf::Event::KeyReleased:
                    switch (event.key.code){
                        case sf::Keyboard::Up:
                            ventanaI.MoveUp();
                            break;
                        case sf::Keyboard::Down:
                            ventanaI.MoveDown();
                            break;
                        case sf::Keyboard::Enter:
                            Game game;
                            switch (ventanaI.GetIndex()){
                                case 0:
                                    game.Run(1);
                                    break;
                                case 1:
                                    game.Run(2);
                                    break;
                                case 2:
                                    game.Run(3);
                                    break;
                                case 3:
                                    game.Run(4);
                                    break;
                            }
                            menu.close();
                            break;

                    }
                    break;
            }
        }
        menu.clear();
        ventanaI.ventana(menu);
        menu.display();
    }
    return 0;
}

