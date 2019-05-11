//
//  Animation.cpp
//  CS-Project
//
//  Created by Miguel Espitia on 5/11/19.
//  Copyright © 2019 nothing. All rights reserved.
//

#include "Animation.hpp"

Animation::Animation(sf::Texture* texture, sf::Vector2u imageCount, double switchTime){
    this->imageCount = imageCount;
    this->switchTime = switchTime;
    totalTime = 0.0f;
    currentImage.x = 0;
    
    uvRect.width = texture->getSize().x / double(imageCount.x);
    uvRect.height = texture->getSize().y / double(imageCount.y);

}
Animation::~Animation(){
    
}
void Animation::update(int row, double deltaTime, bool faceRight){
    currentImage.y = row;
    totalTime += deltaTime;
    
    if(totalTime >= switchTime){
        totalTime -= switchTime;
        currentImage.x++;
        
        if(currentImage.x >= imageCount.x){
            currentImage.x = 0;
        }
    }
    uvRect.top = currentImage.y * uvRect.height;
    
    if(faceRight){
        uvRect.left = currentImage.x * uvRect.width;
        uvRect.width = abs(uvRect.width);
    }else{
        uvRect.left = (currentImage.x + 1) * abs(uvRect.width);
        uvRect.width = -abs(uvRect.width);
    }
}
