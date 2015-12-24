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
        std::cout<<"Field:"<<field<<std::endl;
        stop = board->markField(field, player->get_symbol());
        board->printBoard();
    }
    std::cout<<"Player:  "<<player->get_name()<<" made a move"<<std::endl;
}

Player* TicTacToe::startGame(){
    std::cout<<"Game Started"<<std::endl;
    bool stop = false;
    while(stop != true){
        if(board->all_fields_marked()){
            return nullptr;
        }
        makeMove(player1);
        stop = board->threeInARow(player1->get_symbol());
        if(stop == true){
            return player1;
        }
        makeMove(player2);
        stop = board->threeInARow(player2->get_symbol());
        if(stop == true){
            return player2;
        }
    }
}
