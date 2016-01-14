#include "player.h"
#include <iostream>
#include <sstream>
#include <string>

Player::Player(const std::string& name,const std::string& symbol):
    name(name),symbol(symbol)
{} 

bool Player::makeMove(Board& board){
  while(!board.markField(this->getUserChoice(),*this)){
    std::cout<<"Field already marked"<<std::endl;
  };
  std::cout<<"Move made"<<std::endl;
  return true;
}

int Player::getUserChoice()const{
  std::string line;
  int number;
  while(
    std::cout<<"Make a move:"    &&
    std::getline(std::cin, line) &&
    !(std::istringstream(line) >> number)
  ){
    std::cerr<<"Invalid input. Please try again"<<std::endl;
  }
  return number - 1;
}



