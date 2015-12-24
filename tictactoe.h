#ifndef TICTACTOE_H
#define TICTACTOE_H

#include "player.h"
#include "board.h"

class TicTacToe
{
public:
    TicTacToe();
    ~TicTacToe();
    void initializePlayers();
    Player* startGame();
private:
    void makeMove(const Player* player);

//    std::unique_ptr<Board>board;
//    std::unique_ptr<Player>player1;
//    std::unique_ptr<Player>player2;

    Board*  board;
    Player* player1;
    Player* player2;
};

#endif // TICTACTOE_H
