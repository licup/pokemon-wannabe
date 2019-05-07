#ifndef PLAYER_H
#define PLAYER_H


class Player
{
    public:
        Player();
        Player(string player_name, int player_level, string go_team, string player_offense, int player_offense_pwr);
        // Getters
        string get_player_name()const {return player_name;}
        int get_player_level()const {return player_level;}
        string get_go_team()const {return go_team;}
        string get_player_offense()const {return player_offense;}
        int get_player_offense_pwr()const {return player_offense_pwr;}
        // Setters
        void set_player_name(string player_name){this -> player_name = player_name;}
        void set_player_level(int player_level){this -> player_level = player_level;}
        void set_go_team(string go_team){this -> go_team = go_team;}
        void set_player_offense(string player_offense){this -> player_offense = player_offense;}
        void set_player_offense_pwr(int player_offense_pwr){this -> player_offense_pwr = player_offense_pwr;}
        // Other
        void display()const;
    private:
        string player_name, go_team, player_offense;
        int player_level, player_offense_pwr;
};

#endif // PLAYER_H
