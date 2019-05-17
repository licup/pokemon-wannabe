#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <cstdlib>
#include <string>
#include "Player.h"
#include "Pokemon.h"
#include "Items.h"
#include "Inventory.h"
#include "Pokemon.h"

using namespace std;
using namespace sf;
void battle(Pokemon p, Pokemon p1, Inventory i){
    char move; int choice;

    cout << "You have encountered " << p1.getName() << "!" << endl;

    //While loop continues until one of the pokemon faints
    while(p1.getHealth() > 0 && p.getHealth() > 0){
        //Choosing the what you want to do
        cout << "A - Attack\tI - Item\nR - Run\n";
        cin >> move;
        //Depending on whose speed is higher the pokemon w/ faster speed goes first
        if(p1.getSpd() > p.getSpd()){
            //Switch takes in what you decide to do
            switch(tolower(move)){
                case 'a':
                    cout << p1.getName() << " attacks!" << endl
                    << "Deals " << p1.getAtk() << " damage." << endl;
                    p.lowerHP(p1);
                    cout << p.getName() << "'s HP: " << p.getHealth() << endl;

                    //Checks if pokemon's health is 0
                    if(p.getHealth() <= 0){
                        cout << p.getName() << " fainted." << endl;
                        break;
                    }
                    cout << p.getName() << " attacks!" << endl
                    << "Deals " << p.getAtk() << " damage." << endl;
                    p1.lowerHP(p);
                    //Checks if the opponent's health is 0
                    if(p1.getHealth() <= 0){
                        cout << p1.getName() << " fainted." << endl;
                        break;
                    }
                    else{
                        cout << p1.getName() << "'s HP: " << p.getHealth() << endl;
                        break;
                    }
                    break;
                case 'i':
                //Each case heals your pokemon but you get attacked by the opponent
                    cout << "Choose what item:\n0 - Potion(20HP) 1 - Great Potion(50HP) \t2 - Hyper Potion(200HP)\n";
                    cin >> choice;
                    switch(choice){
                        case 0:
                            p.higherHP(i, choice);
                            cout << p.getName() << " HP: " << p.getHealth() << endl;
                            cout << p1.getName() << " attacks!" << endl
                            << "Deals " << p1.getAtk() << " damage." << endl;
                            p.lowerHP(p1);
                            //Checks if you pokemon faints
                            if(p.getHealth() <= 0){
                                cout << p.getName() << " fainted." << endl;
                                break;
                            }
                            else{
                                cout << p.getName() << "'s HP: " << p.getHealth() << endl;
                                break;
                            }
                            break;
                        case 1:
                            p.higherHP(i, choice);
                            cout << p.getName() << " HP: " << p.getHealth() << endl;
                            cout << p1.getName() << " attacks!" << endl
                            << "Deals " << p1.getAtk() << " damage." << endl;
                            p.lowerHP(p1);
                            //Checks if you pokemon faints
                            if(p.getHealth() <= 0){
                                cout << p.getName() << " fainted." << endl;
                                break;
                            }
                            else{
                                cout << p.getName() << "'s HP: " << p.getHealth() << endl;
                                break;
                            }
                            break;
                        case 2:
                            p.higherHP(i, choice);
                            cout << p.getName() << " HP: " << p.getHealth() << endl;
                            cout << p1.getName() << " attacks!" << endl
                            << "Deals " << p1.getAtk() << " damage." << endl;
                            p.lowerHP(p1);
                            //Checks if you pokemon faints
                            if(p.getHealth() <= 0){
                                cout << p.getName() << " fainted." << endl;
                                break;
                            }
                            else{
                                cout << p.getName() << "'s HP: " << p.getHealth() << endl;
                                break;
                            }
                            break;
                    }
                    break;
                case 'r':
                    cout << "Cannot escape !" << endl;
                    cout << p1.getName() << " attacks!" << endl
                    << "Deals " << p1.getAtk() << " damage." << endl;
                    p.lowerHP(p1);
                    //If your pokemon faints
                    if(p.getHealth() <= 0){
                        cout << p.getName() << " fainted." << endl;
                        break;
                    }
                    else{
                        cout << p.getName() << "'s HP: " << p1.getHealth() << endl;
                        break;
                    }
                    break;
            }
        }
        else{
            switch(tolower(move)){
                case 'a':
                    cout << p.getName() << " attacks!" << endl
                    << "Deals " << p.getAtk() << " damage." << endl;
                    p1.lowerHP(p);
                    cout << p1.getName() << "'s HP: " << p1.getHealth() << endl;
                    //Checks if your opponents faints
                    if(p1.getHealth() <= 0){
                        cout << p1.getName() << " fainted." << endl;
                        break;
                    }
                    cout << p1.getName() << " attacks!" << endl
                    << "Deals " << p1.getAtk() << " damage." << endl;
                    p.lowerHP(p1);
                    //Checks if your pokemon faints
                    if(p.getHealth() <= 0){
                        cout << p.getName() << " fainted." << endl;
                        break;
                    }
                    else{
                        cout << p.getName() << "'s HP: " << p.getHealth() << endl;
                        break;
                    }
                    break;
                case 'i':
                    //Whatever choice you make decides what healing item to use
                    cout << "Choose what item:\n0 - Potion(20HP) 1 - Great Potion(50HP) \t2 - Hyper Potion(200HP)\n";
                    cin >> choice;
                    switch(choice){
                        //Each case heals your pokemon but you get attacked by the opponent
                        case 0:
                            p.higherHP(i, choice);
                            cout << p.getName() << " HP: " << p.getHealth() << endl;
                            cout << p1.getName() << " attacks!" << endl
                            << "Deals " << p1.getAtk() << " damage." << endl;
                            p.lowerHP(p1);
                            //If your pokemon faints
                            if(p.getHealth() <= 0){
                                cout << p.getName() << " fainted." << endl;
                                break;
                            }
                            else{
                                cout << p.getName() << "'s HP: " << p.getHealth() << endl;
                                break;
                            }
                            break;
                        case 1:
                            p.higherHP(i, choice);
                            cout << p.getName() << " HP: " << p.getHealth() << endl;
                            cout << p1.getName() << " attacks!" << endl
                            << "Deals " << p1.getAtk() << " damage." << endl;
                            p.lowerHP(p1);
                            //If your pokemon faints
                            if(p.getHealth() <= 0){
                                cout << p.getName() << " fainted." << endl;
                                break;
                            }
                            else{
                                cout << p.getName() << "'s HP: " << p.getHealth() << endl;
                                break;
                            }
                            break;
                        case 2:
                            p.higherHP(i, choice);
                            cout << p.getName() << " HP: " << p.getHealth() << endl;
                            cout << p1.getName() << " attacks!" << endl
                            << "Deals " << p1.getAtk() << " damage." << endl;
                            p.lowerHP(p1);
                            //If your pokemon faints
                            if(p.getHealth() <= 0){
                                cout << p.getName() << " fainted." << endl;
                                break;
                            }
                            else{
                                cout << p.getName() << "'s HP: " << p.getHealth() << endl;
                                break;
                            }
                            break;
                    }
                    break;
                /*Choosing r doesn't let the player run away from the battle
                  and you are attacked by the opponent*/
                case 'r':
                    cout << "Cannot escape !" << endl;
                    cout << p1.getName() << " attacks!" << endl
                    << "Deals " << p1.getAtk() << " damage." << endl;
                    p.lowerHP(p1);
                    //If your pokemon faints
                    if(p.getHealth() <= 0){
                        cout << p.getName() << " fainted." << endl;
                        break;
                    }
                    else{
                        cout << p.getName() << "'s HP: " << p1.getHealth() << endl;
                        break;
                    }
                    break;
            }
        }
    }
}

int main()

{
    int choice;
    bool inGame;
    cout << "Which game mode? (1/2)" << endl;
    cin >> choice;
    if(choice == 1)
        inGame = true;
    else inGame = false;
    while(inGame){ //these determine which set of text is displayed
  Texture welcomepic, background1, background2, snorlax1;
    welcomepic.loadFromFile("welcomescreen.png");
    background1.loadFromFile("bgwballs.png");
    background2.loadFromFile("ricardo1.png");
    Sprite imageSprite1(background1);
    Sprite imageSprite2(background2);
    Sprite imageSprite3(welcomepic);
    Sprite imageSprite4(snorlax1);
    imageSprite1.scale(0.3,0.35); // 0.95, 1.15 for original background
    imageSprite2.scale(1,2.2);
    imageSprite3.scale(1.5,2);
    imageSprite4.scale(0.2,0.5);
    welcomepic.setSmooth(true);
    welcomepic.setRepeated(true);
    background1.setSmooth(true);
    background1.setRepeated(true);

     sf::Sprite sprite2ax;

     sf::Texture texture2ax;

    //texture.setRepeated(true);

    if (!texture2ax.loadFromFile("tuxSprite.png"))
    {
        cout << "Load failed" << endl;
        //        system("pause");
    }

    Player player(&texture2ax, sf::Vector2u(3,9), 7.f, 300.0f);


    double deltaTime = 0.0f;
    sf::Clock clock;


    sf::Texture textureaz;

    //texture.setRepeated(true);

    if (!textureaz.loadFromFile("pokegobgwball.png"))
    {
        cout << "Load failed" << endl;
//        system("pause");
    }

    sf::Sprite spritez;
    spritez.setTexture(textureaz);

    spritez.setTextureRect(sf::IntRect(600, 400, 1000, 1000));

    //second texture/little guy



    imageSprite1.setTexture(background1);
    //imageSprite1.setColor(sf::Color(255, 255, 255, 128)); // 1st background is semi-transparent (Prob: img becomes too dark)
    imageSprite2.setTexture(background2);
    imageSprite3.setTexture(welcomepic);
    imageSprite3.setScale(.7f, .7f);

    imageSprite4.setTexture(snorlax1);
    SoundBuffer buffer;
    Sound sound;
    sound.setLoop(true);
    Keyboard Key;
    sound.setBuffer(buffer);
    if(!buffer.loadFromFile("intro.ogg"))
        cout << "Can't find IntroMusic.ogg" << endl;
    sound.play();
    Mouse mouse;
    bool boolImage = true;
    bool walkingAround = false;
    bool battle = true;






    bool inBattle = false;
    bool inmenus = true;
    bool menu1 = true;
    bool menu2 = false;
    bool menu3 = false;

    sf::Texture texture, texture2, attackIcon, itemsIcon, runIcon, goBackIcon, attack1Icon, attack2Icon, texture7; //initializing background, enemy, and pokemon
    sf::Music music, beep, music2;; //initializing music and sound effect

    if (!music.openFromFile("battle_music.wav"))return -1; //starts music
     if (!music2.openFromFile("walk_music.wav"))return -1; //starts music

    if (!beep.openFromFile("select_beep.wav"))return -1; // starts select seff
     // Create the main window
    sf::RenderWindow window(sf::VideoMode(950, 636), "SFML window");

    if (!attackIcon.loadFromFile("download.png"))return EXIT_FAILURE;

    if (!texture2.loadFromFile("Snorlax1.png"))return EXIT_FAILURE;

    if (!texture7.loadFromFile("ricardo.png"))return EXIT_FAILURE;

    if (!texture.loadFromFile("battle_template.jpg"))return EXIT_FAILURE;

    if (!itemsIcon.loadFromFile("potion.jpg"))return EXIT_FAILURE;

    if (!runIcon.loadFromFile("run.png"))return EXIT_FAILURE;

    if (!goBackIcon.loadFromFile("arrow.png"))return EXIT_FAILURE;

    sf::Sprite sprite(texture); sprite.setScale(1.7f, 1.7f);

    sf::Sprite sprite2(texture2); sprite2.setScale(1.f, 1.f); sprite2.setPosition(sf::Vector2f(590.f, 40.f));
    sf::Sprite sprite7(texture7); sprite7.setScale(.6f, .6f); sprite7.setPosition(sf::Vector2f(450.f, 40.f));

    sf::Sprite attack(attackIcon); attack.setScale(.4f, .4f); attack.setPosition(sf::Vector2f(170.f, 490.f));

    sf::Sprite items(itemsIcon); items.setScale(.7f, .7f); items.setPosition(sf::Vector2f(420.f, 470.f));

    sf::Sprite run(runIcon); run.setScale(.25f, .25f); run.setPosition(sf::Vector2f(690.f, 470.f));

    sf::Sprite arrow(goBackIcon); arrow.setScale(.5f, .5f); arrow.setPosition(sf::Vector2f(100.f, 470.f));
    //first menu, choices
    sf::Font font1; if (!font1.loadFromFile("sansation.ttf"))return EXIT_FAILURE;

  sf::Text playerHealth;
    playerHealth.setString("100");
    playerHealth.setCharacterSize(30);
    playerHealth.setColor(sf::Color::Black);
    playerHealth.setFont(font1);
    playerHealth.setStyle(sf::Text::Bold);
    playerHealth.setPosition(825, 370);

    sf::Text enemyHealth;
    enemyHealth.setString("100");
    enemyHealth.setCharacterSize(30);
    enemyHealth.setColor(sf::Color::Black);
    enemyHealth.setFont(font1);
    enemyHealth.setStyle(sf::Text::Bold);
    enemyHealth.setPosition(190, 80);

     sf::Text levelFivePlayer;
    levelFivePlayer.setString("5");
    levelFivePlayer.setCharacterSize(30);
    levelFivePlayer.setColor(sf::Color::Black);
    levelFivePlayer.setFont(font1);
    levelFivePlayer.setStyle(sf::Text::Bold);
    levelFivePlayer.setPosition(830, 308);

    sf::Text levelFiveEnemy;
    levelFiveEnemy.setString("5");
    levelFiveEnemy.setCharacterSize(30);
    levelFiveEnemy.setColor(sf::Color::Black);
    levelFiveEnemy.setFont(font1);
    levelFiveEnemy.setStyle(sf::Text::Bold);
    levelFiveEnemy.setPosition(355, 80);
    // Start the game loop
    while(window.isOpen()){

while (inmenus)
    {
         window.draw(imageSprite1);
    window.draw(imageSprite2);
    window.draw(imageSprite3);
    window.draw(imageSprite4);

        Event windowEvent;
        while (window.pollEvent(windowEvent))
        {
            if(windowEvent.type == Event::Closed || Keyboard::isKeyPressed(Keyboard::Escape))
            {
                window.close();
            }
            else if (boolImage && windowEvent.type == sf::Event::MouseButtonPressed)
                {
                    walkingAround = true;
            boolImage = false;
                    sound.stop();}


            else if (!boolImage && windowEvent.type == sf::Event::MouseButtonPressed)
                {
        inBattle = false;
        inmenus = false;
        boolImage = false;

                    sound.stop();}
        }
            if(walkingAround){
                music2.play();
                music2.setLoop(true);
            }
while(walkingAround){
        window.clear();
            inBattle = false;
            deltaTime = clock.restart().asSeconds();

        sf::Event event;

        // handle all events
        while ( window.pollEvent( event ) )
        {
             if(Keyboard::isKeyPressed(Keyboard::Space))
            {
                inBattle = true;
                music2.stop();
                battle = true;
                walkingAround = false;
            }
                         if(Keyboard::isKeyPressed(Keyboard::R))
            {
                inBattle = true;
                music2.stop();
                battle = false;
                walkingAround = false;
            }
            if(player.getKeyPressed()){
                     //==================================================================
            }
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

        window.draw(imageSprite1);
        player.draw(window);

        window.display();

    }//while wa
    if(inBattle){
                music.play();
                music.setLoop(true);
            }
     while (inBattle)
    {   // Process events
 sf::Event event;


    deltaTime = clock.restart().asSeconds();

        while (window.pollEvent(event))
        {


            // Close window: exit
            if (event.type == sf::Event::Closed)
                window.close();

            if (event.type == sf::Event::MouseButtonPressed)
                {
                    beep.stop();
                    beep.play();
                    std::cout << "the right button was pressed" << std::endl;
                    std::cout << "mouse x: " << event.mouseButton.x << std::endl;
                    std::cout << "mouse y: " << event.mouseButton.y << std::endl;


                    if(menu1 &&event.mouseButton.x > 60 && event.mouseButton.x < 297 &&
                       event.mouseButton.y > 460 && event.mouseButton.y < 590){
                            menu1 = false;
                            menu2 = true;
                        }

                    else if (menu1 && event.mouseButton.x > 345 && event.mouseButton.x < 582 &&
                             event.mouseButton.y > 460 && event.mouseButton.y < 598){//middle side
                            menu1 = false;
                            menu2 = false;
                            menu3 = true;
                            cout << "these will be potions";
                    }

                    else if(menu2 && event.mouseButton.x > 60 && event.mouseButton.x < 297 &&
                            event.mouseButton.y > 460 && event.mouseButton.y < 590 ){//left side
                                menu1 = true;
                                menu2 = false;
                    }
                    else if(menu3 && event.mouseButton.x > 60 && event.mouseButton.x < 297 &&
                            event.mouseButton.y > 460 && event.mouseButton.y < 590)
                       {
                                menu1 = true;
                                menu2 = false;
                                menu3 = false;
                       }
                    else if(menu1 && event.mouseButton.x > 660 && event.mouseButton.x < 850 &&
                            event.mouseButton.y > 463 && event.mouseButton.y < 601){ //right side

                                inBattle = false;
                                walkingAround = true;
                                music.stop();
                        }
                }

        }

        window.clear();
        window.draw(sprite);
        if(battle){
        window.draw(sprite2);}
        else{
                window.draw(sprite7);}
        window.draw(levelFivePlayer);
        window.draw(levelFiveEnemy);
        window.draw(playerHealth);
        window.draw(enemyHealth);
         player.update(deltaTime);
         player.draw(window);

        //determine what text to display
        if(menu1){
            window.draw(attack);
            window.draw(items);
            window.draw(run);
        }

        else if(menu2 || menu3){
            window.draw(arrow);
        }
        // Update the windo
        window.display();
    }
        window.clear();
        if(boolImage)
            window.draw(imageSprite3);
        if(!boolImage)
            window.draw(imageSprite1);
        window.display();


    }
    }
    }
    if(!inGame){
    Inventory i;
    Pokemon p("Pikachoo", 500, 150, 215), p1("Ricardo", 999, 200, 999),p3("Mukbang",320,103, 100);
    battle(p1, p3,i);
    return 0;


            }//while in game
    } //int main
