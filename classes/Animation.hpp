//
//  Animation.hpp
//  CS-Project
//
//  Created by Miguel Espitia on 5/11/19.
//  Copyright © 2019 nothing. All rights reserved.
//

#ifndef Animation_hpp
#define Animation_hpp

#include <stdio.h>
#include <iostream>
#include "SFML/Graphics.hpp"

using namespace std;

class Animation{
public:
    Animation(sf::Texture* texture, sf::Vector2u imageCount, double switchTime);
    ~Animation();
    sf::IntRect uvRect;
    void update(int row, double deltaTime, bool faceRight);
private:
    sf::Vector2u imageCount;
    sf::Vector2u currentImage;
    double totalTime;
    double switchTime;
};

#endif /* Animation_hpp */
