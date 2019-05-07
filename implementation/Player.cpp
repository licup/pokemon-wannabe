#include "Player.h"

Player::Player()
{
    player_name = "";
    player_level = 1;
    go_team = "";
    player_offense = "";
    player_offense_pwr = 20;
}
/*
Player::Player(string player_name, int player_level, string go_team, string player_offense, int player_offense_pwr)
{
    this -> player_name = player_name;
    this -> player_level = player_level;
    this -> go_team = go_team;
    this -> player_offense = player_offense;
    this -> player_offense_pwr = player_offense_pwr;
}
*/
void display()const
{
    cout << player_name << endl;
    cout << player_level << endl;
    cout << go_team << endl;
    cout << player_offense << endl;
    cout << player_offense_pwr << endl;
}
