//
// Created by Ivan on 25/06/2019.
//

#ifndef LUDO_MASTER_GAME_H
#define LUDO_MASTER_GAME_H
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

    int CANTIDAD_JUGADORES;
    sf::RenderWindow *window;
    sf::Texture Text_background;
    sf::Sprite Spr_background;
    std::vector<Player> jugadores;
    sf::Font font;
    sf::Text text;

    int NumeroJugada;
    Tablero tablero;
    Dado dado;
public:
    Game();
    void update();
    void draw();
    ~Game();
    void Run(int njugadores);
    void loadBackground();


};


#endif //LUDO_MASTER_GAME_H
