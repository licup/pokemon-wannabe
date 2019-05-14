//
//  Inventory.cpp
//  PokemonGame

#include "Inventory.hpp"
#include <string>

Inventory::Inventory() {
    item[0] = Items("Super Potion", "This heals your pokémon by 20hp", true, 50);
    item[1] = Items("Hyper Potion", "This heals your pokémon by 40hp", true, 200);
    item[2] = Items("Revive", "This revives your pokémon after it has fainted", true, 30);
}
Inventory::Inventory(vector<Items> item){
    //Not sure what to do here yet.
    Inventory();
}
