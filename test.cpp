#include <iostream>
#include <fstream>
#include "board.h"
#include "game.h"
#include "unttt.h"

using namespace std;

void str_to_board(char* board, string str){
    for(int i = 0; i < 9; i++)
        board[i] = str[i];
}

int main(){
    char* board = new char[9];
    string str;
    int res = 0;
    char player1 = 'x', player2 = 'o', cur_player = ' ';

    clear_board(board);
    display_board(board);
    load_pos();

    while(!(has_won(player1, board) || has_won(player2, board))){
        if(cur_player == player1){
            cur_player = player2;
            turn(cur_player, board);
        }
        else{
            cur_player = player1;
            bot_turn(board);
        }
        // turn(cur_player, board);
        display_board(board);
    }

    delete [] board;
    return 0;
}