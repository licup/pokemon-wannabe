//
//  main.cpp
//  PokemonGame
//
#include "Items.hpp"
#include "Inventory.hpp"
#include "Pokemon.hpp"
#include <iostream>

void battle(Pokemon p, Pokemon p2, Inventory i);

int main() {
    Inventory i;
    Pokemon p("Pikachoo", 230, 100, 215), p1("Ricardo", 999, 100, 999),p3("Mukbang",320,78, 100);
    battle(p1, p3,i);
    return 0;
}

void battle(Pokemon p, Pokemon p1, Inventory i){
    char move; int choice;
    //Battle Sequence - Can change this to a function for diff pokémon
    
    cout << "You have encountered " << p1.getName() << "!" << endl;
    while(p1.getHealth() > 0 && p.getHealth() > 0){
        cout << "A - Attack\tI - Item\nR - Run\n";
        cin >> move;
        switch(tolower(move)){
            case 'a':
                cout << p.getName() << " attacks!" << endl
                << "Deals " << p.getAtk() << " damage." << endl;
                p1.lowerHP(p);
                cout << p1.getName() << "'s HP: " << p1.getHealth() << endl;
                if(p1.getHealth() <= 0){
                    cout << p1.getName() << " fainted." << endl;
                    break;
                }
                cout << p1.getName() << " attacks!" << endl
                << "Deals " << p1.getAtk() << " damage." << endl;
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
                cout << "Choose what item:\n0 - Potion(20HP) 1 - Great Potion(50HP) \t2 - Hyper Potion(200HP)\n";
                cin >> choice;
                switch(choice){
                    case 0:
                        p.higherHP(i, choice);
                        cout << p.getName() << " HP: " << p.getHealth() << endl;
                        cout << p1.getName() << " attacks!" << endl
                        << "Deals " << p1.getAtk() << " damage." << endl;
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
                        cout << p.getName() << " HP: " << p.getHealth() << endl;
                        cout << p1.getName() << " attacks!" << endl
                        << "Deals " << p1.getAtk() << " damage." << endl;
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
                    case 2:
                        p.higherHP(i, choice);
                        cout << p.getName() << " HP: " << p.getHealth() << endl;
                        cout << p1.getName() << " attacks!" << endl
                        << "Deals " << p1.getAtk() << " damage." << endl;
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
}
