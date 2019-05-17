#include "Pokemon.hpp"
#include "Inventory.hpp"
#include <iostream>
using namespace std;

Pokemon::Pokemon(){
    name = "";
    health = 0;
    atk = 0;
    speed = 0;
}
Pokemon::Pokemon(string name, int health, int atk, int speed){
    setName(name);
    setHealth(health);
    setAtk(atk);
    setSpd(speed);
}

void Pokemon::print()const{
    cout << "Name: " << getName() << "\nHP: " << getHealth() << endl;
}

void Pokemon::lowerHP(Pokemon& hp){
    this -> health -= hp.getAtk();
}

void Pokemon::higherHP(Inventory i, int ind){
    this -> health += i.getItem(ind).getHeal();
    
}
