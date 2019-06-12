//
// Created by Ivan on 31/05/2019.
//
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Recorrido.cpp"
using namespace sf;
using namespace std;
class Tablero{
private:

public:
    void mostrar(){
        // inicializacion de las imagenes
        sf::Texture tablero;
        sf::Texture dado;
        sf::Font fuente;
        if(!fuente.loadFromFile("C:/Users/Ivan/POO2/arial.ttf")){
        }
        if(!tablero.loadFromFile("C:/Users/Ivan/POO2/tablero.png")){

        }
        if(!dado.loadFromFile("C:/Users/Ivan/POO2/dado.png")){
        }
        sf::Text texto1;
        sf::Text texto2;


        texto1.setString("Lanzar Dado");
        texto1.setFont(fuente);
        texto1.setCharacterSize(17);
        texto1.setPosition(440,275);

        texto2.setString("turno del:");
        texto2.setFont(fuente);
        texto2.setCharacterSize(30);
        texto2.setPosition(433,50);

        sf::Sprite sprite1;
        sprite1.setTexture(tablero);
        sf::Sprite sprite2;
        sprite2.setTexture(dado);
        sprite2.setPosition(450,300);

        //


        sf::RenderWindow window(sf::VideoMode(600, 390), "Ludo Mania");

        sf::RectangleShape casa_amarilla(sf::Vector2f(156,156));
        casa_amarilla.setFillColor(sf::Color::Yellow);
        casa_amarilla.setPosition(0,0);

        sf::RectangleShape casa_Azul(sf::Vector2f(156,156));
        casa_Azul.setFillColor(sf::Color::Blue);
        casa_Azul.setPosition(234,0);

        sf::RectangleShape casa_Roja(sf::Vector2f(156,156));
        casa_Roja.setFillColor(sf::Color::Red);
        casa_Roja.setPosition(0,234);

        sf::RectangleShape casa_verde(sf::Vector2f(156,156));
        casa_verde.setFillColor(sf::Color::Green);
        casa_verde.setPosition(234,234);

//linea_1_VERDE_AMARILLO



        while (window.isOpen()){
            sf::Event event;
            while (window.pollEvent(event)){
                if (event.type == sf::Event::Closed)
                    window.close();
            }
            window.clear();
            //
            window.draw(sprite2);
            window.draw(sprite1);
            window.draw(texto1);
            window.draw(texto2);

            //


            window.display();
        }

    }

};