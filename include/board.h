#ifndef BOARD_H
#define BOARD_H

#include <memory>
#include <string>

class Player;

class Board
{
public:
    Board();
    bool fieldMarked(int field_num)const;
    std::string getFieldSymbol(int field_num)const;
    bool markField(int field_num, const Player& p);
    void printBoard()const;
    bool all_fields_marked()const; 
    void increaseMarkedFields();
    bool gameWon(const Player& p)const;
private:
    static const int BOARD_DIMENSION{3};
    std::string fields[9];
    int num_marked_fields;
};

#endif // BOARD_H
