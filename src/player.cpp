#include "board.h"
#include "player.h"
#include <iostream>
#include <sstream>
#include <string>

Player::Player(const std::string& name,const std::string& symbol):
    name(name),symbol(symbol)
{} 

Player::~Player(){}

std::string Player::get_name()const{return name;}

std::string Player::get_symbol()const{return symbol;}
