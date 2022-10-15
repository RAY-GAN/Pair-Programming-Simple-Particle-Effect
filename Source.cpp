//Sai Anirudh
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/OpenGL.hpp>
#include <SFML/Main.hpp>

#include <iostream>

//My classes
#include "Game.h"

//Namespaces
using namespace sf;
using namespace std;
using namespace gm;

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
    
    Game g;

    while (window.isOpen())
    {
       
        g.handleInput(window);
       
        g.update(window);

        g.render(window);
    }
    return 0;
}

