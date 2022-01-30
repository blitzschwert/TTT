#include "board.h"
#include <iostream>

using namespace std;

// Clears the board and resets it to empty
// void clear_board(char* current_board)
void clear_board(char* current_board){
    for(int i = 0; i < 9; i++)
        current_board[i] = ' ';
}

// Displays the board in the terminal
// void display_board(char* current_board)
void display_board(char* current_board){
    cout << current_board[6] << '|' << current_board[7] << '|' << current_board[8] << endl;
    cout << "-+-+-" << endl;
    cout << current_board[3] << '|' << current_board[4] << '|' << current_board[5] << endl;
    cout << "-+-+-" << endl;
    cout << current_board[0] << '|' << current_board[1] << '|' << current_board[2] << endl;
}

// Places the current player's move
// void place_move(char* current_board, int loc, char player)
void place_move(char* current_board, int loc, char player){current_board[loc-1] = player;}