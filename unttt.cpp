#include "unttt.h"
#include <fstream>

using namespace std;

string pos_boards[96];

int response(char* cur_board){
    int loc = 0, i = 0;
    bool is_equal = false;

    for(i = 0; i < 96; i += 2){
        is_equal = true;
        for(int j = 0; j < 9; j++){
            if(pos_boards[i][j] != cur_board[j]){
                is_equal = false;
                break;
            }

        }
        if(is_equal)
            break;
    }
    loc =  stoi(pos_boards[i+1]);
    return loc;
}

void load_pos(){
    ifstream board_data ("board_data.txt");
    for(int i = 0; i < 96; i++){
        getline(board_data, pos_boards[i]);
    }
}