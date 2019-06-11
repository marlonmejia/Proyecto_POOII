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
        sf::CircleShape position_364_156(13.f);
        position_364_156.setFillColor(sf::Color::Red);
        position_364_156.setPosition(364,156);

        sf::CircleShape position_338_156(13.f);
        position_338_156.setFillColor(sf::Color::White);
        position_338_156.setPosition(338,156);

        sf::CircleShape position_312_156(13.f);
        position_312_156.setFillColor(sf::Color::White);
        position_312_156.setPosition(312,156);

        sf::CircleShape position_286_156(13.f);
        position_286_156.setFillColor(sf::Color::White);
        position_286_156.setPosition(286,156);

        sf::CircleShape position_260_156(13.f);
        position_260_156.setFillColor(sf::Color::White);
        position_260_156.setPosition(260,156);

        sf::CircleShape position_234_156(13.f);
        position_234_156.setFillColor(sf::Color::White);
        position_234_156.setPosition(234,156);

//linea_2 _VERDE_AMARILLO
        sf::CircleShape position_364_182(13.f);
        position_364_182.setFillColor(sf::Color::White);
        position_364_182.setPosition(364,182);

        sf::CircleShape position_364_208(13.f);
        position_364_208.setFillColor(sf::Color::White);
        position_364_208.setPosition(364,208);


        sf::CircleShape position_338_208(13.f);
        position_338_208.setFillColor(sf::Color::Blue);
        position_338_208.setPosition(338,208);

        sf::CircleShape position_312_208(13.f);
        position_312_208.setFillColor(sf::Color::White);
        position_312_208.setPosition(312,208);

        sf::CircleShape position_286_208(13.f);
        position_286_208.setFillColor(sf::Color::White);
        position_286_208.setPosition(286,208);

        sf::CircleShape position_260_208(13.f);
        position_260_208.setFillColor(sf::Color::White);
        position_260_208.setPosition(260,208);

        sf::CircleShape position_234_208(13.f);
        position_234_208.setFillColor(sf::Color::White);
        position_234_208.setPosition(234,208);


//linea_1 VERDE_ROJO
        sf::CircleShape position_208_130(13.f);
        position_208_130.setFillColor(sf::Color::White);
        position_208_130.setPosition(208,130);

        sf::CircleShape position_208_104(13.f);
        position_208_104.setFillColor(sf::Color::White);
        position_208_104.setPosition(208,104);

        sf::CircleShape position_208_78(13.f);
        position_208_78.setFillColor(sf::Color::Blue);
        position_208_78.setPosition(208,78);

        sf::CircleShape position_208_52(13.f);
        position_208_52.setFillColor(sf::Color::White);
        position_208_52.setPosition(208,52);

        sf::CircleShape position_208_26(13.f);
        position_208_26.setFillColor(sf::Color::White);
        position_208_26.setPosition(208,26);

        sf::CircleShape position_208_0(13.f);
        position_208_0.setFillColor(sf::Color::White);
        position_208_0.setPosition(208,0);

//linea_2_ROJO_VERDE
        sf::CircleShape position_156_130(13.f);
        position_156_130.setFillColor(sf::Color::Red);
        position_156_130.setPosition(156,130);

        sf::CircleShape position_156_104(13.f);
        position_156_104.setFillColor(sf::Color::White);
        position_156_104.setPosition(156,104);

        sf::CircleShape position_156_78(13.f);
        position_156_78.setFillColor(sf::Color::White);
        position_156_78.setPosition(156,78);

        sf::CircleShape position_156_52(13.f);
        position_156_52.setFillColor(sf::Color::White);
        position_156_52.setPosition(156,52);

        sf::CircleShape position_156_26(13.f);
        position_156_26.setFillColor(sf::Color::White);
        position_156_26.setPosition(156,26);

        sf::CircleShape position_156_0(13.f);
        position_156_0.setFillColor(sf::Color::White);
        position_156_0.setPosition(156,0);

        sf::CircleShape position_182_0(13.f);
        position_182_0.setFillColor(sf::Color::White);
        position_182_0.setPosition(182,0);

//linea_1 AZUL_ROJO


        sf::CircleShape position_130_156(13.f);
        position_130_156.setFillColor(sf::Color::White);
        position_130_156.setPosition(130,156);

        sf::CircleShape position_104_156(13.f);
        position_104_156.setFillColor(sf::Color::White);
        position_104_156.setPosition(104,156);

        sf::CircleShape position_78_156(13.f);
        position_78_156.setFillColor(sf::Color::White);
        position_78_156.setPosition(78,156);

        sf::CircleShape position_52_156(13.f);
        position_52_156.setFillColor(sf::Color::White);
        position_52_156.setPosition(52,156);

        sf::CircleShape position_26_156(13.f);
        position_26_156.setFillColor(sf::Color::White);
        position_26_156.setPosition(26,156);

        sf::CircleShape position_0_156(13.f);
        position_0_156.setFillColor(sf::Color::White);
        position_0_156.setPosition(0,156);

//linea_2 AZUL_ROJO


        sf::CircleShape position_130_208(13.f);
        position_130_208.setFillColor(sf::Color::White);
        position_130_208.setPosition(130,208);

        sf::CircleShape position_104_208(13.f);
        position_104_208.setFillColor(sf::Color::White);
        position_104_208.setPosition(104,208);

        sf::CircleShape position_78_208(13.f);
        position_78_208.setFillColor(sf::Color::White);
        position_78_208.setPosition(78,208);

        sf::CircleShape position_52_208(12.f);
        position_52_208.setFillColor(sf::Color::Green);
        position_52_208.setPosition(52,208);

        sf::CircleShape position_26_208(12.f);
        position_26_208.setFillColor(sf::Color::Green);
        position_26_208.setPosition(26,208);

        sf::CircleShape position_0_208(12.f);
        position_0_208.setFillColor(sf::Color::White);
        position_0_208.setPosition(0,208);

        sf::CircleShape position_0_182(12.f);
        position_0_182.setFillColor(sf::Color::Green);
        position_0_182.setPosition(0,182);


//linea_1 AMARILLO_AZUL

        sf::CircleShape position_208_234(13.f);
        position_208_234.setFillColor(sf::Color::White);
        position_208_234.setPosition(208,234);

        sf::CircleShape position_208_260(13.f);
        position_208_260.setFillColor(sf::Color::White);
        position_208_260.setPosition(208,260);

        sf::CircleShape position_208_286(13.f);
        position_208_286.setFillColor(sf::Color::Blue);
        position_208_286.setPosition(208,286);

        sf::CircleShape position_208_312(13.f);
        position_208_312.setFillColor(sf::Color::White);
        position_208_312.setPosition(208,312);

        sf::CircleShape position_208_338(13.f);
        position_208_338.setFillColor(sf::Color::White);
        position_208_338.setPosition(208,338);

        sf::CircleShape position_208_364(13.f);
        position_208_364.setFillColor(sf::Color::White);
        position_208_364.setPosition(208,364);




//linea_2_ROJO_VERDE


        sf::CircleShape position_156_364(13.f);
        position_156_364.setFillColor(sf::Color::White);
        position_156_364.setPosition(156,364);

        sf::CircleShape position_156_338(13.f);
        position_156_338.setFillColor(sf::Color::White);
        position_156_338.setPosition(156,338);

        sf::CircleShape position_156_312(13.f);
        position_156_312.setFillColor(sf::Color::White);
        position_156_312.setPosition(156,312);

        sf::CircleShape position_156_286(13.f);
        position_156_286.setFillColor(sf::Color::White);
        position_156_286.setPosition(156,286);

        sf::CircleShape position_156_260(13.f);
        position_156_260.setFillColor(sf::Color::White);
        position_156_260.setPosition(156,260);

        sf::CircleShape position_156_234(13.f);
        position_156_234.setFillColor(sf::Color::Red);
        position_156_234.setPosition(156,234);

        sf::CircleShape position_182_364(13.f);
        position_182_364.setFillColor(sf::Color::Red);
        position_182_364.setPosition(182,364);



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

            window.draw(position_208_364);
            window.draw(position_208_338);
            window.draw(position_208_312);
            window.draw(position_208_286);
            window.draw(position_208_260);
            window.draw(position_208_234);


            window.draw(position_364_156);
            window.draw(position_338_156);
            window.draw(position_312_156);
            window.draw(position_286_156);
            window.draw(position_260_156);
            window.draw(position_234_156);

            window.draw(position_364_182);
            window.draw(position_364_208);
            window.draw(position_338_208);
            window.draw(position_312_208);
            window.draw(position_286_208);
            window.draw(position_260_208);
            window.draw(position_234_208);

            window.draw(position_208_130);
            window.draw(position_208_104);
            window.draw(position_208_78);
            window.draw(position_208_52);
            window.draw(position_208_26);
            window.draw(position_208_0);

            window.draw(position_156_130);
            window.draw(position_156_104);
            window.draw(position_156_78);
            window.draw(position_156_52);
            window.draw(position_156_26);
            window.draw(position_156_0);
            window.draw(position_182_0);

            window.draw(position_156_364);
            window.draw(position_156_338);
            window.draw(position_156_312);
            window.draw(position_156_286);
            window.draw(position_156_260);
            window.draw(position_156_234);
            window.draw(position_182_364);


            window.draw(position_130_156);
            window.draw(position_104_156);
            window.draw(position_78_156);
            window.draw(position_52_156);
            window.draw(position_26_156);
            window.draw(position_0_156);

            window.draw(position_130_208);
            window.draw(position_104_208);
            window.draw(position_78_208);
            window.draw(position_52_208);
            window.draw(position_26_208);
            window.draw(position_0_208);
            window.draw(position_0_182);



            window.display();
        }

    }

};