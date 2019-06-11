#include <SFML/Graphics.hpp>
#include <iostream>
#include "Menu.cpp"
#include "Juego.cpp"
using namespace sf;
using namespace std;
int main()
{
    RenderWindow window1(VideoMode(600, 384), "Inicio");
    Texture inicio;
    Font fuente;
    if(!fuente.loadFromFile("C:/Users/Ivan/POO2/arial.ttf")){
        return EXIT_FAILURE;
    }
    if(!inicio.loadFromFile("C:/Users/Ivan/POO2/inicio.png")){
        return EXIT_FAILURE;
    }
    Text texto;
    texto.setString("Press Enter to continue");
    texto.setFont(fuente);
    texto.setCharacterSize(15);
    texto.setPosition(230, 360);
    texto.setFillColor(Color::Black);
    texto.setStyle(Text::Underlined);
    Sprite sprite5;
    sprite5.setTexture(inicio);
    while(window1.isOpen()){
        if(Keyboard::isKeyPressed(Keyboard::Enter)){
            RenderWindow window2(VideoMode(300,300),"N° Jugadores");
            Menu menu(window2.getSize().x,window2.getSize().y);
            while (window2.isOpen()){
                Event event;
                while(window2.pollEvent(event)){
                    switch(event.type){
                        case Event::KeyReleased:
                            switch(event.key.code){
                                case Keyboard::Up:
                                    menu.Moveup();
                                    break;
                                case Keyboard::Down:
                                    menu.Movedown();
                                    break;
                                case Keyboard::Enter:
                                    Juego ludo(4);
                                    if(menu.GetPressedItem()==0){
                                        Jugadores player1("player1",0);
                                        Jugadores CPU1("CPU1",1);
                                        Jugadores CPU2("CPU2",2);
                                        Jugadores CPU3("CPU3",3);
                                        ludo.iniciarJuego();
                                    }
                                    if(menu.GetPressedItem()==1){
                                        Jugadores player1("player1",0);
                                        Jugadores player2("player2",1);
                                        Jugadores CPU1("CPU1",2);
                                        Jugadores CPU3("CPU3",3);
                                    }
                                    if(menu.GetPressedItem()==2){
                                        Jugadores player1("player1",0);
                                        Jugadores player2("player2",1);
                                        Jugadores player3("player3",2);
                                        Jugadores CPU1("CPU3",3);
                                    }
                                    if(menu.GetPressedItem()==3){
                                        Jugadores player1("player1",0);
                                        Jugadores player2("player2",1);
                                        Jugadores player3("player3",2);
                                        Jugadores player4("player4",3);
                                    }
                                    break;

                            }
                            break;
                    }
                }
            }

            window1.close();
        }
        window1.clear();
        window1.draw(sprite5);
        window1.draw(texto);
        window1.display();
    }
    return 0;
}