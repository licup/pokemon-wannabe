//
//  Items.cpp
//  PokemonGame
//
//  Created by Jr on 4/18/19.
//  Copyright © 2019 Edgar Licup. All rights reserved.
//

#include "Items.hpp"
using namespace std;
Items::Items() : name(""), desc(""), heal(0), isHeal(false){
    //empty
}
Items::Items(string name, string desc, bool isHeal) : name(name), desc(desc), isHeal(isHeal){
    //empty
}

Items::Items(string name, string desc, bool isHeal, int heal) : name(name), desc(desc), isHeal(isHeal), heal(heal){
    //empty
}

void Items::print()const{
    if(isHeal)
        cout << "Name: " << name << endl << "Description: " << desc << endl << "Health gain: " << heal << endl;
    else
        cout << "Name: " << name << endl << "Description: " << desc << endl;
}
