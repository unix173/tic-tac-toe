#include <iostream>
#include "tictactoe.h"

using namespace std;

int main()
{
    TicTacToe* game = new TicTacToe;
    game->initializePlayers();
    Player* winner = game->startGame();
    if(winner == nullptr){
        cout<<"Game Draw"<<endl<<endl;
    }
    else{
        cout<<"Game won by player: '"<<winner->get_name()<<"' with symbol: "<<winner->get_symbol()<<endl;
        winner->increaseScore();
    }

    delete game;
    return 0;

}

