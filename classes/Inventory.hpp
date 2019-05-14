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


class Inventory : public Items {
public:
    Inventory();
    Inventory(Items item);
    
    //Getters and Setters
    Items getItem(int ind){
        return this->item[ind];
    }
    void setItem(int ind, Items item){
        this->item[ind] = item;
    }
    
private:
    Items item[5]; 
};

#endif /* Inventory_hpp */
