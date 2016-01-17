#ifndef BOARD_H
#define BOARD_H

#include <string>

class Board
{
public:
    Board();
    bool fieldMarked(int field_num)const;
    std::string getFieldSymbol(int field_num)const;
    bool markField(int field_num, const std::string& s);
    void printBoard()const;
    bool all_fields_marked()const; 
    void increaseMarkedFields();
    bool gameWon(const std::string& s)const;
private:
    static const int BOARD_DIMENSION{3};
    std::string fields[9];
    int num_marked_fields;
};

#endif // BOARD_H
