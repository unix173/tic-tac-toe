#ifndef COMPUTERPLAYER_H
#define COMPUTERPLAYER_H
#include <string>

class Player;
class ComputerPlayer : public Player
{
public:
    ComputerPlayer();
    ComputerPlayer(const std::string& name, const std::string& symbol);
    ~ComputerPlayer();
    bool makeMove(Board& board);
};


#endif // COMPUTERPLAYER_H
