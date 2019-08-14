#ifndef PLAYGAME_GAME_H
#define PLAYGAME_GAME_H

#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;


class Game{
    
    private:
        string numero;
        int count;
	public:
		bool gameOn;
	    
		Game();
		
		void setup();

		void logic(string n);

		bool gameState();
		
		bool playGame();
		
		int getCount();

};

#endif // PLAYGAME_GAME_H