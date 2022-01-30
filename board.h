// board.h
#ifndef BOARD // include guard
#define BOARD
#include <string>

using namespace std;

void clear_board(string*);
void display_board(string*);
void place_move(string*, int, char);

#endif