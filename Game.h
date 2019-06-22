//
// Created by Usuario on 21/06/2019.
//


#ifndef LUDO_PROJECT_GAME_H
#define LUDO_PROJECT_GAME_H

#include "Player.h"
#include "Tablero.h"
#include "Dado.h"
const int WINDOWTAM_X  = 1000,WINDOWTAM_Y  = 900,
          POSX_TEXT = 920, POSY_TEXT = 160;
const std::string WINDOW_NAME = "Ludo-Project",
                  BOARD = "Images/ludo.png",
                  FONT = "Images/FontFile.ttf";



class Game {
private:

    int CANTIDAD_JUGADORES=4;
    sf::RenderWindow *window;
    sf::Texture Text_background;
    sf::Sprite Spr_background;
    std::vector<Player> jugadores;
    sf::Font font;
    sf::Text text;

    int NumeroJugada;
    int cl=0;
    Tablero tablero;
    Dado dado;
public:


    Game();
    void update();
    void draw();
    ~Game();
    void Run();
    void loadBackground();
};


#endif //LUDO_PROJECT_GAME_H
