#include <iostream>
#include "tictactoe.h"

using namespace std;

int main()
{
  TicTacToe* game = new TicTacToe;
  game->startGame();
  delete game;
  return 0;
}
