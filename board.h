#ifndef BOARD_H
#define BOARD_H

#include <memory>

class Board
{
public:
    Board();
    bool fieldMarked(int field);
    bool markField(int field, int symbol);
    void printBoard()const;
    int* getFieldPtrByNumber(int field);
    bool all_fields_marked()const {return fieldsMarked == BOARD_DIMENSION * BOARD_DIMENSION;}
    bool threeInARow(int symbol)const;
private:
    static const int BOARD_DIMENSION = 3;
    int fields[BOARD_DIMENSION][BOARD_DIMENSION];
    int fieldsMarked;
};

#endif // BOARD_H
