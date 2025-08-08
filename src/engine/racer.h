#pragma once
#include <SMFL/Graphics.hpp>
#include <string>

struct Racer {

    std::string name;
    float speed;
    float positionX = 0.0f;
    float positionY = 0.0f;
    sf::Sprite sprite;

    Racer(const std::string& n, float s, const sf::Texture& tex, float y)
        : name(n), speed(s), positionY(y){
            sprite.setTexture(tex);
            sprite.setPosition(positionX, positionY);
        }
    
    void update(float deltaTime){
        positionX += speed * deltaTime;
        sprite.setPosition(positionX, positionY);
    }

    bool hasFinished(float finishLineX) const {
        return positionX >= finishLineX;
    }

    void reset() {
        positionX = 0.0f;
        sprite.setPosition(positionX, positionY);
    }


}