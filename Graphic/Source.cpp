/*#include "Game.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
    sf::RenderWindow window(sf::VideoMode(512, 400), "SFML works!", sf::Style::Close | sf::Style::Titlebar);
    sf::RectangleShape shape(sf::Vector2f(100,100));
    shape.setFillColor(sf::Color::Yellow);
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event)){
         switch(event.type) {
           case sf::Event::Closed:
               window.close();
               break;
           case sf::Event::TextEntered:
               if (event.text.unicode< 128 ) { // Caractères ASCII
                   printf("%c", event.text.unicode);
               }
               
               break;
        }
        }

       // window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}


int main()
{
    Sonar::Game(800, 600, "SFML Starter");
}*/