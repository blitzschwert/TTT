#ifndef GAME
#define GAME
#include <string>

using namespace std;

void turn(char, char*);
void bot_turn(char*);
int valid_move(char*, int);
int has_won(char, char*);

#endif