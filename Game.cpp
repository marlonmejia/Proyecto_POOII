
#include "Game.h"

Game::Game(){
    window = new  sf::RenderWindow(sf::VideoMode(WINDOWTAM_X, WINDOWTAM_Y), WINDOW_NAME);
    this->loadBackground();
    NumeroJugada=0;

    if(!font.loadFromFile(FONT)){};
    text.setFont(font);

    for(int i=0;i<CANTIDAD_JUGADORES;i++){
        if(i==0){
            jugadores.push_back(Player(i,tablero.getCasillasVerdes()[0].pos.X,tablero.getCasillasVerdes()[0].pos.Y));
        }
        else if(i==1){
            jugadores.push_back(Player(i,tablero.getCasillasAmarillas()[0].pos.X,tablero.getCasillasAmarillas()[0].pos.Y));

        }
        else if(i==2){
            jugadores.push_back(Player(i,tablero.getCasillasAzules()[0].pos.X,tablero.getCasillasAzules()[0].pos.Y));

        }
        else if(i==3){
            jugadores.push_back(Player(i,tablero.getCasillasRojas()[0].pos.X,tablero.getCasillasRojas()[0].pos.Y));

        }
    }
    jugadores[NumeroJugada%4].setJugar(true);
    jugadores[(NumeroJugada+1)%4].setJugar(false);
    jugadores[(NumeroJugada+2)%4].setJugar(false);
    jugadores[(NumeroJugada+3)%4].setJugar(false);

}
void Game::Run() {

    while(window->isOpen()){
        sf::Event event;
        while(window->pollEvent(event)){
            if(event.type == sf::Event::Closed){
                window->close();
            }
        }

        this->update();
        this->draw();

    }

}

void Game::update(){

    for(int i=0;i<jugadores.size();i++){
        if(jugadores[i].getJugar()){
            for(int j=0;j<jugadores[i].getFichas().size();j++){
                jugadores[i].getFichas()[j].getPieza().setOutlineThickness(5);

                jugadores[i].getFichas()[j].getPieza().setOutlineColor(sf::Color(0, 0, 0));
            }
        }
        else{
            for(int j=0;j<jugadores[i].getFichas().size();j++){
                jugadores[i].getFichas()[j].getPieza().setOutlineThickness(0);

                }
        }
    }
    if(dado.getjugarDado()==dadoWait::ready){
        dado.getdadoSprite().setColor(sf::Color::Green);
    }
    else if(dado.getjugarDado()==dadoWait::blocked){
        dado.getdadoSprite().setColor(sf::Color::Red);
    }

    if(sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
        // transform the mouse position from window coordinates to world coordinates
        sf::Vector2f mouse = window->mapPixelToCoords(sf::Mouse::getPosition(*window));

        if(dado.getGlobalBounds().contains(mouse) and dado.getjugarDado()==dadoWait::ready){
            dado.girar();
            dado.setjugarDado(dadoWait::blocked);

            std::cout<<dado.getValor()<<std::endl;
        }


        int contador=0;
        for(int i=0;i<jugadores.size();i++){
            for(int j=0;j<jugadores[i].getFichas().size();j++){
                if(jugadores[i].getFichas()[j].getGlobalBounds().contains(mouse) and jugadores[i].getJugar() and dado.getjugarDado()==dadoWait::blocked){
                 //   jugadores[i].getFichas()[j].getPieza().setPosition(tablero.getCasillasBlancas()[dado.getValor()%52].pos.X,tablero.getCasillasBlancas()[dado.getValor()%52].pos.Y);
                    for(int k=0;k<jugadores[NumeroJugada%4].getFichas().size();k++){
                        if(jugadores[NumeroJugada%4].getFichas()[j].getPosicion_mapa()<4){
                            contador++;
                        }
                    }

                    NumeroJugada++;
                    jugadores[NumeroJugada%4].setJugar(true);
                    jugadores[(NumeroJugada+1)%4].setJugar(false);
                    jugadores[(NumeroJugada+2)%4].setJugar(false);
                    jugadores[(NumeroJugada+3)%4].setJugar(false);


                    if(jugadores[i].getFichas()[j].getPosicion_mapa()<4 and dado.getValor()==6){
                        if(jugadores[i].getFichas()[j].getColor()==colores::verde){
                            jugadores[i].getFichas()[j].getPieza().setPosition(tablero.getCasillasBlancas()[0].pos.X,tablero.getCasillasBlancas()[0].pos.Y);
                            jugadores[i].getFichas()[j].setPosicion_mapa(0);

                        }
                        if(jugadores[i].getFichas()[j].getColor()==colores::amarillo){
                            jugadores[i].getFichas()[j].getPieza().setPosition(tablero.getCasillasBlancas()[13].pos.X,tablero.getCasillasBlancas()[13].pos.Y);
                            jugadores[i].getFichas()[j].setPosicion_mapa(13);

                        }
                        if(jugadores[i].getFichas()[j].getColor()==colores::azul){
                            jugadores[i].getFichas()[j].getPieza().setPosition(tablero.getCasillasBlancas()[26].pos.X,tablero.getCasillasBlancas()[26].pos.Y);
                            jugadores[i].getFichas()[j].setPosicion_mapa(26);
                        }
                        if(jugadores[i].getFichas()[j].getColor()==colores::rojo){
                            jugadores[i].getFichas()[j].getPieza().setPosition(tablero.getCasillasBlancas()[39].pos.X,tablero.getCasillasBlancas()[39].pos.Y);
                            jugadores[i].getFichas()[j].setPosicion_mapa(39);
                        }
                        jugadores[i].getFichas()[j].setPosicion_juego(0);
                        dado.setjugarDado(dadoWait::ready);

                    }



                     if(jugadores[i].getFichas()[j].getPosicion_juego()>=0 and !jugadores[i].getFichas()[j].getFirstTime()){

                        jugadores[i].getFichas()[j].getPieza().setPosition(tablero.getCasillasBlancas()[(dado.getValor()+jugadores[i].getFichas()[j].getPosicion_mapa())%52].pos.X,tablero.getCasillasBlancas()[(dado.getValor()+jugadores[i].getFichas()[j].getPosicion_mapa())%52].pos.Y);
                        jugadores[i].getFichas()[j].setPosicion_juego( jugadores[i].getFichas()[j].getPosicion_juego()+dado.getValor());
                        jugadores[i].getFichas()[j].setPosicion_mapa( (jugadores[i].getFichas()[j].getPosicion_mapa()+dado.getValor())%52);
                        dado.setjugarDado(dadoWait::ready);
                    }

                    if(contador==4){
                        dado.setjugarDado(dadoWait::ready);
                    }
                    if(jugadores[i].getFichas()[j].getPosicion_juego()==0 and jugadores[i].getFichas()[j].getFirstTime()){
                        jugadores[i].getFichas()[j].setFirstTime(false);
                    }

                }



            }
        }

    }
    if(dado.getjugarDado()==dadoWait::blocked){
        text.setString(std::to_string(dado.getValor()));
    }
    else if(dado.getjugarDado()==dadoWait::ready){
        text.setString("#");
    }

    text.setCharacterSize(150);
    text.setPosition(POSX_TEXT,POSY_TEXT);
    text.setFillColor( sf::Color::Black );
    text.setStyle( sf::Text::Style::Bold );

    if(jugadores[NumeroJugada%4].getFichas()[0].getColor()==colores::rojo){
        text.setOutlineColor( sf::Color::Red );
    }
    else if(jugadores[NumeroJugada%4].getFichas()[0].getColor()==colores::verde){
        text.setOutlineColor( sf::Color::Green );
    }
    else if(jugadores[NumeroJugada%4].getFichas()[0].getColor()==colores::azul){
        text.setOutlineColor( sf::Color::Blue );
    }
    else if(jugadores[NumeroJugada%4].getFichas()[0].getColor()==colores::amarillo){
        text.setOutlineColor( sf::Color::Yellow );
    }

    text.setOutlineThickness( 10 );

}


void Game::draw() {
    window->clear();
    window->draw(Spr_background);
    window->draw(dado.getdadoSprite());
    for(int i=0;i<jugadores.size();i++){
        jugadores[i].draw(window);
    }
    window->draw(text);
    window->display();
}

void Game::loadBackground() {
    if(!Text_background.loadFromFile(BOARD)){}
    Spr_background.setTexture(Text_background);
}

Game::~Game() {
    delete window;
}