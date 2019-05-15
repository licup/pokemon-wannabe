#ifndef PLAYER_H
#define PLAYER_H


class Player
{
    public:
        Player();
        Player(string player_name, int player_level, string player_offense, int player_offense_pwr);
        // Getters
        string get_player_name()const {return player_name;}
        int get_player_level()const {return player_level;}
        // Setters
        void set_player_name(string player_name){this -> player_name = player_name;}
        void set_player_level(int player_level){this -> player_level = player_level;}
        // Other
        void display()const;
    private:
        string player_name, go_team;
        int player_level;
};

#endif // PLAYER_H
