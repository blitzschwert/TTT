#include <iostream>
#include "board.h"
#include "game.h"

using namespace std;

int main(){
    char* board = new char[9];
    char player1 = 'x', player2 = 'o', cur_player = ' ';

    clear_board(board);
    display_board(board);

    while(!(has_won(player1, board) || has_won(player2, board))){
        if(cur_player == player1)
            cur_player = player2;
        else
            cur_player = player1;
        turn(cur_player, board);
        display_board(board);
    }

    delete [] board;
    return 0;
}