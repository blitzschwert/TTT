#include "board.h"
#include <iostream>

void clear_board(char*[5][6] current_board){
    *current_board = base_board;
}

void display_board(char[5][6] current_board){
    for(int i; i < 5; i++){
        std::cout << current_board[i] << std::endl;
    }
}
