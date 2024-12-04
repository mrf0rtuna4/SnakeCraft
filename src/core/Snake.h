#ifndef SNAKE_H
#define SNAKE_H

#include <SFML/Graphics.hpp>
#include <vector>

class Snake {
public:
    Snake(); // строительно
    void move();
    void grow();
    void render(sf::RenderWindow& window);
    bool checkCollision();

private:
    std::vector<sf::RectangleShape> segments;
    sf::Vector2f direction;
    const float segmentSize = 20.f;
};

#endif // SNAKE_H
