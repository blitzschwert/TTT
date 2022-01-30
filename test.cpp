#include <iostream>
#include "board.h"
#include "game.h"

using namespace std;

int main(){
    char* test_board = new char[9];

    clear_board(test_board);
    display_board(test_board);
    turn('x', test_board);
    for(int i = 0; i < 4; i++){
        display_board(test_board);
        turn('o', test_board);
        display_board(test_board);
        turn('x', test_board);
        has_won('x', test_board);
    }

    delete [] test_board;
    return 0;
}