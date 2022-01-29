#include <iostream>
#include "board.h"

using namespace std;

int main(){
    string* board[5];
    string* test_board[5]; // = {{"x|o|x"}, {"-----"}, {"o|x|o"}, {"-----"}, {"x|o|x"}};
    printf("check1");

    display_board(*test_board);
    printf("check3");
    clear_board(test_board);
    display_board(*test_board);

    return 0;
}