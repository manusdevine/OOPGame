#include "imgui.h"
#include "imgui-SFML.h"

#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Adventure Game");

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }

            window.clear(sf::Color::Black);

            window.display();
        }
    }
    return 0;
}