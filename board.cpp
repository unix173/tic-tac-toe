#include "board.h"

#include <iostream>

Board::Board():
    fieldsMarked(0),
    fields{{0,0,0},{0,0,0},{0,0,0}}
{}

int* Board::getFieldPtrByNumber(int field){
    switch(field){
        case 1: return &fields[2][0];
        case 2: return &fields[2][1];
        case 3: return &fields[2][2];
        case 4: return &fields[1][0];
        case 5: return &fields[1][1];
        case 6: return &fields[1][2];
        case 7: return &fields[0][0];
        case 8: return &fields[0][1];
        case 9: return &fields[0][2];
        default : return nullptr;
    }
}

bool Board::fieldMarked(int field){
    int board_field = *getFieldPtrByNumber(field);
    for(int row = 0; row < BOARD_DIMENSION; ++row){
        for(int column = 0; column < BOARD_DIMENSION; ++column){
            if (board_field == 1 || board_field == 2){
                return true;
            }
        }
    }
    return false;
}

bool Board::markField(int field, int symbol){
    if(!fieldMarked(field)){
        *getFieldPtrByNumber(field) = symbol;
        return true;
    }
    return false;
}

void Board::printBoard()const{
    for(int row = 0; row < BOARD_DIMENSION; ++row){
        for(int column = 0; column < BOARD_DIMENSION; ++column){
            std::cout<<"\t"<<fields[row][column];
        }
        std::cout<<std::endl;
    }
}

bool Board::threeInARow(int symbol)const{
    return  (
                //rows
                (fields[0][0] == symbol && fields[0][1] == symbol && fields[0][2] == symbol) ||
                (fields[1][0] == symbol && fields[1][1] == symbol && fields[1][2] == symbol) ||
                (fields[2][0] == symbol && fields[2][1] == symbol && fields[2][2] == symbol) ||
                //columns
                (fields[0][0] == symbol && fields[1][0] == symbol && fields[2][0] == symbol) ||
                (fields[0][1] == symbol && fields[1][1] == symbol && fields[2][1] == symbol) ||
                (fields[0][2] == symbol && fields[1][2] == symbol && fields[2][2] == symbol) ||
                //diagonals
                (fields[0][0] == symbol && fields[1][1] == symbol && fields[2][2] == symbol) ||
                (fields[2][0] == symbol && fields[1][1] == symbol && fields[0][2] == symbol)
            );
}
















