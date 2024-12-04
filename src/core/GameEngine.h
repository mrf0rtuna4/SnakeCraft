#ifndef GAME_ENGINE_H
#define GAME_ENGINE_H

#include <SFML/Graphics.hpp>

class GameEngine {
public:
    GameEngine();
    void run();

private:
    void processEvents();
    void update();
    void render();

    sf::RenderWindow window;
    sf::RectangleShape snake;
};

#endif // GAME_ENGINE_H
