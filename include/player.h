#ifndef PLAYER_H
#define PLAYER_H

#include<string>

class Player
{
public:
    Player();
    Player(const std::string& name,int symbol);
    void increaseScore();
    void setPlayerInfo();

    void set_symbol(int symbol){this->symbol = symbol;}
    void set_name(const std::string& name){this->name = name;}

    int get_symbol()const{return symbol;}
    int get_score()const{return score;}
    std::string get_name()const{return name;}
private:
    std::string name;
    int symbol;
    int score;
};

#endif // PLAYER_H
