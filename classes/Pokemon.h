#ifndef POKEMON_H
#define POKEMON_H
#include <string>
using namespace std;

class Pokemon
{
    public:
        Pokemon();
        Pokemon(string poke_name, int poke_level, string poke_type, string poke_offense, int poke_offense_pwr);
        // Getters
        string get_poke_name()const {return poke_name;}
        int get_poke_level()const {return poke_level;}
        string get_poke_type()const {return poke_type;}
        string get_poke_offense()const {return poke_offense;}
        int get_poke_offense_pwr()const {return poke_offense_pwr;}
        // Setters
        void set_poke_name(string poke_name){this -> poke_name = poke_name;}
        void set_poke_level(int poke_level){this -> poke_level = poke_level;}
        void set_poke_type(string poke_type){this -> poke_type = poke_type;}
        void set_poke_offense(string poke_offense){this -> poke_offense = poke_offense;}
        void set_poke_offense_pwr(int poke_offense_pwr){this -> poke_offense_pwr = poke_offense_pwr;}
        // Other
        void display()const;
        void lowerHP(Pokemon& hp); //Function used when a pokemon attacks
        void higherHP(Inventory i, int ind); //Function used when a healing item is used
    private:
        string poke_name, poke_type, poke_offense;
        int poke_level, poke_offense_pwr;
};

#endif // POKEMON_H
