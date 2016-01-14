#include "tictactoe.h"
#include <iostream>
#include <string>

TicTacToe::TicTacToe():
board(new Board),player1(new Player("p1","x")),player2(new Player("p2","y")) 
{}

TicTacToe::~TicTacToe(){
    delete board;
    delete player1;
    delete player2;
}

void TicTacToe::startGame(){
 
  do{
    board->printBoard();
    player1->makeMove(*board);
    board->printBoard();
    if(board->all_fields_marked()){
      std::cout<<"Draw"<<std::endl;
     return;
    }	
    if(board->gameWon(*player1)){
      std::cout<<"Player 1 won the game"<<std::endl;
      return;
    }
    
    player2->makeMove(*board);
    if(board->all_fields_marked()){
      std::cout<<"Draw"<<std::endl;
     return;
    }
    if(board->gameWon(*player2)){
      std::cout<<"Player 2 won the game"<<std::endl;
      return;
    }
    else{
      
    }
  }while(1);
}