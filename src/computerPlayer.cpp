#include "player.h"
#include "board.h"
#include "computerPlayer.h"
#include <iostream>
#include <sstream>
#include <string>

ComputerPlayer::ComputerPlayer(const std::string &name, const std::string &symbol):
     Player(name, symbol)
{}

ComputerPlayer::~ComputerPlayer(){
}

bool ComputerPlayer::makeMove(Board& board){
  while(!board.markField(this->getUserChoice(),this->get_symbol())){
    std::cout<<"Field already marked"<<std::endl;
  };
  std::cout<<"Move made"<<std::endl;
  return true;
}

int ComputerPlayer::getUserChoice()const{
  std::string line;
  int number;
  while(
    std::cout<<"Make a move:"    &&
    std::getline(std::cin, line) &&
    (!(std::istringstream(line) >> number) ||
     !(number > 0 && number < 10))
  ){
    std::cerr<<"Invalid input. Please try again"<<std::endl;
  }
  return number - 1;
}
