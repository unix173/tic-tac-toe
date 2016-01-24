#ifndef COMPUTERPLAYER_H
#define COMPUTERPLAYER_H
#include <string>

class Board;
class Player;
class ComputerPlayer : public Player
{
public:
    ComputerPlayer()=delete;
    ComputerPlayer(const std::string& name, const std::string& symbol);
    ~ComputerPlayer();
    int getUserChoice() const;
    bool makeMove(Board& board);
};


#endif // COMPUTERPLAYER_H
