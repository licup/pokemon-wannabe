//
//  Player.cpp
//  CS-Project
//
//  Created by Miguel Espitia on 5/11/19.
//  Copyright © 2019 nothing. All rights reserved.
//

#include "Player.hpp"


Player::Player(sf::Texture* texture, sf::Vector2u imageCount, double switchTime, double speed):

animation(texture, imageCount, switchTime){
    this->speed = speed;
    row = 0;
    faceRight = true;
    
    body.setSize(sf::Vector2f(100.0f, 150.0f));
    body.setPosition(206.0f, 206.0f);
    body.setTexture(texture);
}
Player::~Player(){
    
}
void Player::update(double deltaTime){
    sf::Vector2f movement(0.0f, 0.0f);
    
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        movement.x -= speed * deltaTime;
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        movement.x += speed * deltaTime;
    
    if(movement.x == 0.0f){
        row = 0;
    }else{
        row = 1;
        
        if(movement.x > 0.0f)
            faceRight = true;
        else
            faceRight = false;
    }
    animation.update(row, deltaTime, faceRight);
    body.setTextureRect(animation.uvRect);
    body.move(movement);
}
void Player::draw(sf::RenderWindow& window){
    window.draw(body);
}
