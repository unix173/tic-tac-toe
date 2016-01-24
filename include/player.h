#ifndef PLAYER_H
#define PLAYER_H

#include<string>

class Board;

class Player
{
public:
    Player()=delete;
    Player(const std::string& name, const std::string& symbol);
    virtual ~Player();
    virtual bool makeMove(Board& board)=0;
    std::string get_name()const;
    std::string get_symbol()const;
protected:
    std::string name;
    std::string symbol;
};

#endif // PLAYER_H
