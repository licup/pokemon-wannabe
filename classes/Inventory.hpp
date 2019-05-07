//
//  Inventory.hpp
//  PokemonGame
//
//  Created by Jr on 4/18/19.
//  Copyright © 2019 Edgar Licup. All rights reserved.
//

#ifndef Inventory_hpp
#define Inventory_hpp

#include "Items.hpp"
#include <iostream>
#include <vector>

class Inventory : public Items {
public:
    static int slot;
    
    Inventory();
    Inventory(vector<Items> item, int quantity);
    
    //Getters and Setters
    Items getItem()const{return item[slot]; slot++;}
    int getQuantity()const{return quantity;}
    
    void setItem(const vector<Items> &itemName);
    void setQuantity(int quant){this -> quantity = quant;}
private:
    vector<Items> item; //vector being used so that you do not need to run a loop in order to set all the values of the array
    int quantity;
};

#endif /* Inventory_hpp */
