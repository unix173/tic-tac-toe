#include "tictactoe.h"
#include <iostream>
#include <string>

TicTacToe::TicTacToe()
{

    board = new Board;
    player1 = new Player;
    player2 = new Player;

}

TicTacToe::~TicTacToe()
{
    delete board;
    delete player1;
    delete player2;
}


void TicTacToe::initializePlayers()
{
    player1->setPlayerInfo();
    do{
        player2->setPlayerInfo();
    }while(player2->get_symbol() == player1->get_symbol());
}

void TicTacToe::makeMove(const Player* player){
    bool stop = false;
    while(stop == false){
        std::cout<<"Pick a field:[1-9]"<<std::endl;
        int field;
        std::cin>>field;
        stop = board->markField(field, player->get_symbol());
        board->printBoard();
    }
}

Player* TicTacToe::startGame(){
    std::cout<<"Game Started"<<std::endl;
    bool stop = false;
    while(stop != true){
        makeMove(player1);
        stop = board->threeInARow(player1->get_symbol());
        if(stop == true){
            return player1;
        }
        if(board->all_fields_marked() == true){
            return nullptr;
        }
        makeMove(player2);
        stop = board->threeInARow(player2->get_symbol());
        if(stop == true){
            return player2;
        }
        if(board->all_fields_marked() == true){
            return nullptr;
        }
    }
}
