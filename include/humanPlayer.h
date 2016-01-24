#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H

#include<string>

class Player;
class Board;

class HumanPlayer : public Player
{
public:
    HumanPlayer()=delete;
    HumanPlayer(const std::string& name, const std::string& symbol);
    ~HumanPlayer();
    bool makeMove(Board& board);
    int getUserChoice()const;
};

#endif // HUMANPLAYER_H
