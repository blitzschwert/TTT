#include "board.h"
#include <iostream>

using namespace std;

string blank_board[5] = {{" | | "}, {"-+-+-"}, {" | | "}, {"-+-+-"}, {" | | "}};

// Clears the board and resets it to empty
void clear_board(string* current_board){
    for(int i = 0; i < 5; i++)
        current_board[i] = blank_board[i];
}

// Displays the board in the terminal
void display_board(string current_board[5]){
    for(int i = 0; i < 5; i++){
        cout << current_board[i] << endl;
    }
}

void place_move(string* current_board, int loc, char player){
    switch(loc){
        case 1:
            current_board[4][0] = player;
            break;
        case 2:
            current_board[4][2] = player;
            break;
        case 3:
            current_board[4][4] = player;
            break;
        case 4:
            current_board[2][0] = player;
            break;
        case 5:
            current_board[2][2] = player;
            break;
        case 6:
            current_board[2][4] = player;
            break;
        case 7:
            current_board[0][0] = player;
            break;
        case 8:
            current_board[0][2] = player;
            break;
        case 9:
            current_board[0][4] = player;
            break;
        default:
            break;
    }
}