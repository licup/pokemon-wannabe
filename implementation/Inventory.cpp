//
//  Inventory.cpp
//  PokemonGame

#include "Inventory.hpp"
#include <string>

Inventory::Inventory() {
    item[0] = Items("Pokéball", "This lets you have a chance at catching a pokémon!", false);
    item[1] = Items("Potion", "This heals your pokémon by 20hp", true, 20);
    item[2] = Items("Great Potion", "This heals your pokémon by 40hp", true, 40);
    item[3] = Items("Revive", "This revives your pokémon after it has fainted", true, 30);
    item[4] = Items("Great Ball", "This lets you have a higher chance at catching a pokémon!", false);
}
Inventory::Inventory(vector<Items> item){
    //Not sure what to do here yet.
    Inventory();
}

void Inventory::setItem(const vector<Items> &itemName){
    item = itemName;
}
