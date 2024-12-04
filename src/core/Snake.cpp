#include "Snake.h"

Snake::Snake() {
    sf::RectangleShape segment(sf::Vector2f(segmentSize, segmentSize));
    segment.setFillColor(sf::Color::Green);
    segment.setPosition(400.f, 300.f);
    segments.push_back(segment);

    direction = sf::Vector2f(segmentSize, 0.f);
}

void Snake::move() {
    for (std::size_t i = segments.size() - 1; i > 0; --i) {
        segments[i].setPosition(segments[i - 1].getPosition());
    }
    // дрочите
    segments[0].move(direction);
}

void Snake::grow() {
    sf::RectangleShape newSegment(sf::Vector2f(segmentSize, segmentSize));
    newSegment.setFillColor(sf::Color::Green);
    newSegment.setPosition(segments.back().getPosition());
    segments.push_back(newSegment);
}

void Snake::render(sf::RenderWindow& window) {
    for (const auto& segment : segments) {
        window.draw(segment);
    }
}

bool Snake::checkCollision() {
    // чекинг столкновений головы с телом или границами (потом)
    return false;
}
