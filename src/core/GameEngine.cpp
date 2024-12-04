#include "GameEngine.h"

GameEngine::GameEngine()
    : window(sf::VideoMode(800, 600), "SnakeCraft"), snake(sf::Vector2f(20.f, 20.f)) {
    snake.setFillColor(sf::Color::Green);
    snake.setPosition(400.f, 300.f);
}

void GameEngine::run() {
    while (window.isOpen()) {
        processEvents();
        update();
        render();
    }
}

void GameEngine::processEvents() {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed)
            window.close();
    }
}

void GameEngine::update() {
    // read TODO 
}

void GameEngine::render() {
    window.clear();
    window.draw(snake);
    window.display();
}