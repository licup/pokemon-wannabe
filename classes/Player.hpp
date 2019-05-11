//
//  Player.hpp
//  CS-Project
//
//  Created by Miguel Espitia on 5/11/19.
//  Copyright © 2019 nothing. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp
#include "Animation.hpp"

#include <stdio.h>
#include <iostream>
#include "SFML/Graphics.hpp"

using namespace std;

class Player{
public:
    Player(sf::Texture* texture, sf::Vector2u imageCount, double switchTime, double speed);
    ~Player();
    void update(double deltaTime);
    void draw(sf::RenderWindow& window);
private:
    sf::RectangleShape body;
    Animation animation;
    unsigned int row;
    double speed;
    bool faceRight;
};


#endif /* Player_hpp */
