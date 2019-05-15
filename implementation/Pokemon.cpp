#include "Pokemon.h"
#include "Inventory.hpp"
#include <iostream>
using namespace std;

Pokemon::Pokemon()
{
    poke_name = "";
    poke_level = 1;
    poke_type = "";
    poke_offense = "";
    poke_offense_pwr = 20;
}
/*
Pokemon::Pokemon(string poke_name, int poke_level, string poke_type, string poke_offense, int poke_offense_pwr)
{
    this -> poke_name = poke_name;
    this -> poke_level = poke_level;
    this -> poke_type = poke_type;
    this -> poke_offense = poke_offense;
    this -> poke_offense_pwr = poke_offense_pwr;
}
*/
void display()const
{
    cout << poke_name << endl;
    cout << poke_level << endl;
    cout << poke_type << endl;
    cout << poke_offense << endl;
}
void Pokemon::lowerHP(Pokemon& hp){
    this -> health -= hp.get_poke_offense_pwr();
}

void Pokemon::higherHP(Inventory i, int ind){
    this -> health += i.getItem(ind).getHeal();
    
}
