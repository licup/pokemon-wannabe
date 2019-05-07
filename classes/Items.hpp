//
//  Items.hpp
//  PokemonGame
//
//  Created by Jr on 4/18/19.
//  Copyright © 2019 Edgar Licup. All rights reserved.
//

#ifndef Items_hpp
#define Items_hpp

#include <iostream>
using namespace std;

class Items {
public:
    //Constructors
    Items();
    Items(string name, string desc, bool isHeal); //if the item doesn't heal
    Items(string name, bool isHeal, int heal); //if the item heals and you're in a battle
    Items(string name, string desc, bool isHeal, int heal); //if **the item does heal
    
    
    
    //Getters & Setters
    string getName()const{return name;}
    string getDesc()const{return desc;}
    int getHeal()const{return heal;}
    bool getIsHeal()const{return isHeal;}
    
    void setName(string name){this -> name = name;}
    void setDesc(string desc){this -> desc = desc;}
    void setHeal(int heal){this -> heal = heal;}
    void setIsHeal(bool isHeal){this -> isHeal = isHeal;}
    
    //Other Methods
    void print()const; //prints out the info based on the object
    
private:
    string name, desc;
    int heal;
    bool isHeal;
};

#endif /* Items_hpp */
