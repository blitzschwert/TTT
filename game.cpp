#include "game.h"
#include "board.h"
#include "unttt.h"
#include <iostream>

using namespace std;

int turn_count = 0;

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
    turn_count++;
}

void bot_turn(char* current_board){
    int loc = -1;
    loc = response(current_board);
    place_move(current_board, loc, 'x');
    turn_count++;
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
    if((cb[0] == cb[1] && cb[1] == cb[2] && cb[2] == player) || (cb[3] == cb[4] && cb[4] == cb[5] && cb[5] == player) ||
       (cb[6] == cb[7] && cb[7] == cb[8] && cb[8] == player) || (cb[0] == cb[3] && cb[3] == cb[6] && cb[6] == player) || 
       (cb[1] == cb[4] && cb[4] == cb[7] && cb[7] == player) || (cb[2] == cb[5] && cb[5] == cb[8] && cb[8] == player) ||
       (cb[0] == cb[4] && cb[4] == cb[8] && cb[8] == player) || (cb[2] == cb[4] && cb[4] == cb[6] && cb[6] == player)){
        cout << "Congrats! Player " << player << " has won!" << endl;
        return 1;
    }
    else if(turn_count >= 8){
        cout << "Uh-oh! It's a tie!" << endl;
        return 1;
    }
    else 
        return 0;
}