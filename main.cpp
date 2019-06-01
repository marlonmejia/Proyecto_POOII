#include <SFML/Graphics.hpp>
using namespace sf;
int main()
{
    RenderWindow window(sf::VideoMode(600, 384), "Ludo");
    window.setVerticalSyncEnabled(true);

    Texture tablero;
    Texture dado;
    Font fuente;
    if(!fuente.loadFromFile("C:/Users/Ivan/POO2/arial.ttf")){
        return EXIT_FAILURE;
    }
    if(!tablero.loadFromFile("C:/Users/Ivan/POO2/tablero.png")){
        return EXIT_FAILURE;
    }
    if(!dado.loadFromFile("C:/Users/Ivan/POO2/dado.png")){
        return EXIT_FAILURE;
    }
    Text texto1;
    Text texto2;


    texto1.setString("Lanzar Dado");
    texto1.setFont(fuente);
    texto1.setCharacterSize(17);
    texto1.setPosition(440,275);

    texto2.setString("turno del:");
    texto2.setFont(fuente);
    texto2.setCharacterSize(30);
    texto2.setPosition(433,50);

    Sprite sprite1;
    sprite1.setTexture(tablero);
    Sprite sprite2;
    sprite2.setTexture(dado);
    sprite2.setPosition(450,300);
    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(sprite2);
        window.draw(sprite1);
        window.draw(texto1);
        window.draw(texto2);
        window.display();
    }

    return 0;
}