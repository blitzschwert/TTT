#include "board.h"
#include <iostream>

using namespace std;

string blank_board[5] = {{" | | "}, {"-+-+-"}, {" | | "}, {"-+-+-"}, {" | | "}};

void clear_board(string* current_board[5]){
    printf("check2");
    for(int i = 0; i < 5; i++)
        *current_board[i] = blank_board[i];
}

void display_board(string current_board[5]){
    for(int i = 0; i < 5; i++){
        cout << current_board[i] << endl;
    }
}