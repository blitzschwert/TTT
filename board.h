// board.h
#ifndef BOARD // include guard
#define BOARD

char blank_board[5][6] = {{" | | "}, {"-----"}, {" | | "}, {"-----"}, {" | | "}};

void clear_board(char*[5][6]);
void display_board(char[5][6]);

#endif