#ifndef Pokemon_H
#define Pokemon_H

#include "Inventory.hpp"
#include <string>
using namespace std;

class Pokemon {
public:
    Pokemon();
    Pokemon(string name, int health, int atk, int speed);
    
    string getName()const{return name;}
    
    int getHealth()const{return health;}
    int getAtk()const{return atk;}
    int getSpd()const{return speed;}
    void setName(string name){this -> name = name;}
    void setHealth(int health){this -> health = health;}
    void setAtk(int atk){this -> atk = atk;}
    void setSpd(int spd){this -> speed = spd;}
    
    void lowerHP(Pokemon& hp);
    void higherHP(Inventory i, int ind);
    void print()const;
    
private:
    string name;
    int health, atk, speed;
};
#endif /* Pokemon_hpp */
