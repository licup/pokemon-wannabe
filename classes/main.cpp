//
//  main.cpp
//  CS-Project
//
//  Created by Miguel Espitia on 5/5/19.
//  Copyright © 2019 nothing. All rights reserved.
//

#include <iostream>
#include "SFML/Graphics.hpp"
#include "Player.hpp"

using namespace std;

int main(){
    
    sf::RenderWindow window( sf::VideoMode(600, 390), "Bootleg Pokemon" );

    //first texture/background
    sf::Texture texture;

    //texture.setRepeated(true);

    if (!texture.loadFromFile("/Users/mike/Desktop/CSS/CS-Project/CS-Project/res/img/newGrass.png"))
    {
        cout << "Load failed" << endl;
//        system("pause");
    }

    sf::Sprite sprite;
    sprite.setTexture(texture);

    sprite.setTextureRect(sf::IntRect(0, 0, 1000, 1000));
    
    //second texture/little guy
    sf::Texture texture2;
    
    //texture.setRepeated(true);
    
    if (!texture2.loadFromFile("/Users/mike/Desktop/CSS/CS-Project/CS-Project/res/img/tuxSprite.png"))
    {
        cout << "Load failed" << endl;
        //        system("pause");
    }
    
    sf::Sprite sprite2;
    
    Player player(&texture2, sf::Vector2u(3,9), 0.3f, 100.0f);
    
    double deltaTime = 0.0f;
    sf::Clock clock;

    //sprite.setColor(sf::Color(255, 255, 255, 64));

    while ( window.isOpen( ) )
    {
        deltaTime = clock.restart().asSeconds();
        
        sf::Event event;

        // handle all events
        while ( window.pollEvent( event ) )
        {
            switch (event.type)
            {
                case sf::Event::Closed:
                    window.close( );

                    break;
            }
        }
        
        // update the game
        player.update(deltaTime);

        window.clear();
        
        window.draw(sprite);
        player.draw(window);

        window.display();
        
        
    }
    
    return 0;
}
