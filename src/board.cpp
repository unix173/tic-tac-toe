#include "board.h"
#include "player.h"
#include <iostream>


Board::Board():
    num_marked_fields(0),
    fields{"0","0","0","0","0","0","0","0","0"}
{}

bool Board::fieldMarked(int field_num) const{
  return fields[field_num] != "0";
}

bool Board::markField(int field_num, const Player& p){
  if(!fieldMarked(field_num)){
    this->fields[field_num] = p.get_symbol();
    this->increaseMarkedFields();
    return true;
  }
  else{
    return false;
  }
}

void Board::increaseMarkedFields(){
    ++this->num_marked_fields;
}

bool Board::all_fields_marked()const {
  return num_marked_fields == BOARD_DIMENSION * BOARD_DIMENSION;
}
 
void Board::printBoard()const{
    //std::cout << "String board" << std::endl;
    for(int i = 0; i < BOARD_DIMENSION * BOARD_DIMENSION; ++i){
	  if (i % 3 ==  0) {
	    std::cout<< std::endl;
	  }
            std::cout<<"\t"<<fields[i];
	}  
        std::cout<<std::endl;
}

bool Board::gameWon(const Player& p)const{
    return  (
      //rows
      (fields[0] == p.get_symbol()  &&
       fields[1] == p.get_symbol()  &&
       fields[2] == p.get_symbol()) ||
       
      (fields[3] == p.get_symbol()  &&
       fields[4] == p.get_symbol()  &&
       fields[5] == p.get_symbol()) ||
       
      (fields[6] == p.get_symbol()  &&
       fields[7] == p.get_symbol()  &&
       fields[8] == p.get_symbol()) ||
      //columns
      (fields[0] == p.get_symbol()   &&
       fields[3] == p.get_symbol()   &&
       fields[6] == p.get_symbol())  ||
      
      (fields[1] == p.get_symbol()  &&
       fields[4] == p.get_symbol()  &&
       fields[7] == p.get_symbol()) ||
       
      (fields[2] == p.get_symbol()  &&
       fields[5] == p.get_symbol()  &&
       fields[8] == p.get_symbol()) ||
      //diagonals
      (fields[0] == p.get_symbol()  &&
       fields[4] == p.get_symbol()  &&
       fields[8] == p.get_symbol()) ||
      
      (fields[6] == p.get_symbol()  &&
       fields[4] == p.get_symbol()  &&
       fields[2] == p.get_symbol())
  );
}
















