#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
using namespace std;
using namespace sf;
int main()
{
    RenderWindow window(sf::VideoMode(920,680), "SFML Test");
    // ****PRACTICE**** CircleShape shape(100.f);
    // ****PRACTICE**** shape.setFillColor(Color::Cyan);
    Texture welcomepic, background1, background2;
    welcomepic.loadFromFile("welcomebackground.png");
    background1.loadFromFile("pokebackground1.png");
    background2.loadFromFile("pokebackground2.png");
    Sprite imageSprite1(background1);
    Sprite imageSprite2(background2);
    Sprite imageSprite3(welcomepic);
    imageSprite1.scale(1.5,2.2);
    imageSprite2.scale(1,2.2);
    imageSprite3.scale(1.5,2);
    welcomepic.setSmooth(true);
    welcomepic.setRepeated(true);
    window.draw(imageSprite1);
    window.draw(imageSprite2);
    window.draw(imageSprite3);
    imageSprite1.setTexture(background1);
    imageSprite2.setTexture(background2);
    imageSprite3.setTexture(welcomepic);
    SoundBuffer buffer;
    Sound sound;
    sound.setLoop(true);
    sound.setVolume(60);
    Keyboard Key;
    sound.setBuffer(buffer);

    Event event;
    while (window.isOpen())
    {
        Event windowEvent;
        while (window.pollEvent(windowEvent))
        {
            switch(windowEvent.type){
            case Event::KeyPressed:
                if(!buffer.loadFromFile("IntroMusic.ogg"))
                    cout << "Can't find IntroMusic.ogg" << endl;
                sound.play();
                break;
                switch(windowEvent.type)
            {
            case Event::Closed:
                window.close();
                break;
            case Event::KeyPressed:
                switch(windowEvent.type)
                {
                case Event::KeyPressed:
                    while(window.isOpen())
                    {
                    if(windowEvent.key.code == Keyboard::Enter)
                    {
                        window.clear();
                        window.draw(imageSprite1);
                        window.display();
                        switch(windowEvent.type) {
                    case Event::KeyPressed:
                        if(event.type == Event::KeyPressed && event.key.code == Keyboard::Escape)
                        {
                            cout << "Hi" << endl;
                            window.close();
                            break;
                        }
                        }
                    }
                    else
                    {
                        cout << "It's not working, hoe" << endl;
                    }
                    }
                    break;
            }

                /*
                if()
                    sound.play();
                else if(windowEvent.key.code != Keyboard::Space
                        && windowEvent.key.code != Keyboard::Enter
                        && windowEvent.key.code != Keyboard::Right
                        && windowEvent.key.code != Keyboard::Left)
                    sound.stop();
                    break;
            case Event::MouseButtonPressed:
                cout << "Pressed" << endl;
                //sound.stop();
                window.close();
                window.clear();
                window.draw(imageSprite1);
                window.display();
                switch(windowEvent.key.code)
                {
                case Mouse::Left:
                    window.clear();
                    window.draw(imageSprite1);
                    window.display();
                    break;
                case Event::MouseButtonReleased:
                    cout << "Mouse button has been released" << endl;
                    break;

                    switch(windowEvent.key.code)
                    {
                    case Mouse::Right:
                        cout << "Right key has been released" << endl;
                        break;
                    }
                case Event::MouseMoved:
                    //cout << "Mouse has been moved" << endl;
                    //cout << windowEvent.mouseMove.y << endl;
                    break;
                case Event::MouseEntered:
                    cout << "Mouse has entered the window" << endl;
                    break;
                case Event::MouseLeft:
                    cout << "Mouse has left the window" << endl;
                    break;
                    */
                }
            default:
                break;
            }

        }
        //sound.play();
        window.clear();
        window.draw(imageSprite3);
        //window.draw(imageSprite2);
        window.display();
    }
    return 0;
}
