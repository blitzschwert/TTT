#include "game.h"
#include "board.h"
#include <iostream>

using namespace std;

// Plays through a player's turn
// void turn(char player, char* current_board)
void turn(char player, char* current_board){
    int loc = -1;
    cout << "Player " << player << " choose a location: ";
    cin >> loc;
    while(!valid_move(current_board, loc)){
        cout << "Invalid move, try again: ";
        cin >> loc;
    }
    place_move(current_board, loc, player);
}

// Checks if a move is valid
// int valid_move(char* current_board, int loc)
int valid_move(char* current_board, int loc){
    if(current_board[loc-1] == ' ')
        return 1;
    else
        return 0;
}

// Checks if a player has won
// int has_won(char player, char* cb)
int has_won(char player, char* cb){
    if((cb[0] == cb[1] && cb[1] == cb[2]) || (cb[3] == cb[4] && cb[4] == cb[5]) || (cb[6] == cb[7] && cb[7] == cb[8]) ||
       (cb[0] == cb[3] && cb[3] == cb[6]) || (cb[1] == cb[4] && cb[4] == cb[7]) || (cb[2] == cb[5] && cb[5] == cb[8]) ||
       (cb[0] == cb[4] && cb[4] == cb[7]) || (cb[2] == cb[4] && cb[4] == cb[6])){
        cout << "Congrats! Player " << player << " has won!" << endl;
        return 1;
    }
    else 
        return 0;
}