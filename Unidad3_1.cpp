#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>


int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "1");

    sf::Texture redPointTexture;
    redPointTexture.loadFromFile("rcircle.png");
    sf::Sprite puntoRojo(redPointTexture);

    sf::Vector2f topLeft(0, 0);
    sf::Vector2f topRight(680, 0);
    sf::Vector2f bottomLeft(0, 480);
    sf::Vector2f bottomRight(680, 480);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.clear();
        puntoRojo.setPosition(topLeft);
        window.draw(puntoRojo);
        puntoRojo.setPosition(topRight);
        window.draw(puntoRojo);
        puntoRojo.setPosition(bottomLeft);
        window.draw(puntoRojo);
        puntoRojo.setPosition(bottomRight);
        window.draw(puntoRojo);
        window.display();
    }

    return 0;
}