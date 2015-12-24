#include "player.h"

#include <iostream>

Player::Player()
{}

Player::Player(const std::string& name,int symbol):
    name(name),symbol(symbol)
{
    score = 0;
}

void Player::increaseScore(){
    score += 100;
}

void Player::setPlayerInfo(){

    //TODO filter bad input

    std::string name;
    int symbol;

    std::cout<<"Enter player name:";
    std::cin>>name;
    std::cout<<"Enter player symbol:";
    std::cin>>symbol;

    set_name(name);
    set_symbol(symbol);

    std::cout<<"----------------------------------"<<std::endl;
    std::cout<<"player name:"  <<get_name()  <<std::endl;
    std::cout<<"player symbol:"<<get_symbol()<<std::endl;
    std::cout<<"----------------------------------"<<std::endl;
}

