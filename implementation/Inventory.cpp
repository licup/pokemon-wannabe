//
//  Inventory.cpp
//  PokemonGame
//
//  Created by Jr on 4/18/19.
//  Copyright © 2019 Edgar Licup. All rights reserved.
//

#include "Inventory.hpp"
Inventory::Inventory() {
    quantity = 0;
}
Inventory::Inventory(vector<Items> item, int quantity){
    //Not sure what to do here yet.
}

void Inventory::setItem(const vector<Items> &itemName){
    item = itemName;
}
