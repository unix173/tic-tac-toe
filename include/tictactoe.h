#ifndef TICTACTOE_H
#define TICTACTOE_H

class Board;
class Player;

class TicTacToe
{
public:
    TicTacToe();
    ~TicTacToe();
    void startGame();  
private:
    Board* board;
    Player* player1;
    Player* player2;
};

#endif // TICTACTOE_H
