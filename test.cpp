#include <iostream>
#include "board.h"

using namespace std;

int main(){
    string* board[5];
    string* test_board = new string[5];
    test_board[0] = {"x|o|x"};
    test_board[1] = {"-----"};
    test_board[2] = {"o|x|o"};
    test_board[3] = {"-----"};
    test_board[4] = {"x|o|x"};
    

    display_board(test_board);
    clear_board(test_board);
    place_move(test_board, 5, 'x');
    display_board(test_board);

    delete [] test_board;
    return 0;
}