#include "Player.h"

Player::Player()
{
    player_name = "";
    player_level = 1;
}
/*
Player::Player(string player_name, int player_level, string go_team, string player_offense, int player_offense_pwr)
{
    this -> player_name = player_name;
    this -> player_level = player_level;
}
*/
void display()const
{
    cout << player_name << endl;
    cout << player_level << endl;
}
