#ifndef PLAYER_H
#define PLAYER_H
#include "board.h"
#include<string>

class Board;

class Player
{
public:
    Player() ;
    Player(const std::string& name, const std::string& symbol);
    bool makeMove(Board& board);
    std::string get_name()const{return name;}
    std::string get_symbol()const{return symbol;}
    int getUserChoice()const;
private:
    std::string name;
    std::string symbol;
};

#endif // PLAYER_H
