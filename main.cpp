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

int main() {
    Inventory i;
    Pokemon p("Pikachoo", 230, 100, 215), p1("Ricardo", 999, 100, 999);
    char move; int choice;
    //Battle Sequence - Can change this to a function for diff pokémon
    cout << "You have encountered " << p1.getName() << "!" << endl;
    while(p1.getHealth() > 0 && p.getHealth() > 0){
        cout << "A - Attack\tI - Item\nR - Run\n";
        cin >> move;
        switch(tolower(move)){
            case 'a':
                cout << p.getName() << " attacks!" << endl
                << "Deals " << p.getAtk() << "damage." << endl;
                p1.lowerHP(p);
                cout << p1.getName() << "'s HP: " << p1.getHealth() << endl;
                if(p1.getHealth() <= 0){
                    cout << p1.getName() << " fainted." << endl;
                    break;
                }
                cout << p1.getName() << " attacks!" << endl
                << "Deals " << p1.getAtk() << "damage." << endl;
                p.lowerHP(p1);
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
                cout << "Choose what item:\n0 - Great Potion(50HP) \t1 - Hyper Potion(200HP)\n";
                cin >> choice;
                switch(choice){
                    case 0:
                        p.higherHP(i, choice);
                        cout << p.getName() << "HP: " << p.getHealth() << endl;
                        cout << p1.getName() << " attacks!" << endl
                        << "Deals " << p1.getAtk() << "damage." << endl;
                        p.lowerHP(p1);
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
                        cout << p.getName() << "HP: " << p.getHealth() << endl;
                        cout << p1.getName() << " attacks!" << endl
                        << "Deals " << p1.getAtk() << "damage." << endl;
                        p.lowerHP(p1);
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
    return 0;
}
