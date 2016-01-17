#include "board.h"
#include <iostream>

Board::Board():
    num_marked_fields(0),
    fields{"0","0","0","0","0","0","0","0","0"}
{}

bool Board::fieldMarked(int field_num) const{
  return fields[field_num] != "0";
}
std::string Board::getFieldSymbol(int field_num)const{
    return this->fields[field_num];
}
bool Board::markField(int field_num, const std::string& s){
  if(!fieldMarked(field_num)){
    this->fields[field_num] = s;
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
    for(int i = 0; i < BOARD_DIMENSION * BOARD_DIMENSION; ++i){
	  if (i % 3 ==  0) {
	    std::cout<< std::endl;
	  }
            std::cout<<"\t"<<fields[i];
	}  
        std::cout<<std::endl;
}

bool Board::gameWon(const std::string& s)const{
    return  (
      //rows
      (fields[0] == s  &&
       fields[1] == s  &&
       fields[2] == s) ||
       
      (fields[3] == s  &&
       fields[4] == s  &&
       fields[5] == s) ||
       
      (fields[6] == s  &&
       fields[7] == s  &&
       fields[8] == s) ||
      //columns
      (fields[0] == s   &&
       fields[3] == s   &&
       fields[6] == s)  ||
      
      (fields[1] == s  &&
       fields[4] == s  &&
       fields[7] == s) ||
       
      (fields[2] == s  &&
       fields[5] == s  &&
       fields[8] == s) ||
      //diagonals
      (fields[0] == s  &&
       fields[4] == s  &&
       fields[8] == s) ||
      
      (fields[6] == s  &&
       fields[4] == s  &&
       fields[2] == s)
  );
}
















