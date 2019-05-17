//
//  main.cpp
//  PokemonGame
//
//  Created by Jr on 4/18/19.
//  Copyright © 2019 Edgar Licup. All rights reserved.
//
#include "Items.hpp"
#include "Inventory.hpp"
#include "Pokemon.hpp"
#include <iostream>

void battle(Pokemon p, Pokemon p2, Inventory i);

int main() {
    Inventory i;
    Pokemon p("Pikachoo", 500, 150, 215), p1("Ricardo", 999, 200, 999),p3("Mukbang",320,103, 100);
    battle(p1, p3,i);
    return 0;
}

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
