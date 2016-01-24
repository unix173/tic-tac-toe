#include "player.h"
#include "computerPlayer.h"
#include <iostream>

ComputerPlayer::ComputerPlayer(){
     std::cout<<"Computer Player created"<<std::endl;
}

ComputerPlayer::ComputerPlayer(const std::string &name, const std::string &symbol):
     Player(name, symbol)
{}

ComputerPlayer::~ComputerPlayer(){
    std::cout<<"Computer Player deleted"<<std::endl;
}

bool ComputerPlayer::makeMove(Board& board){
  std::cout<<"Computer played a move"<<std::endl;
  return true;
}
