//author: Tiago Gonçalves
/*
On a sheet of paper, the players each write a 4-digit secret number. The digits must be all different. 
Then, in turn, the players try to guess their opponent's number who gives the number of matches. 
If the matching digits are in their right positions, they are "bulls", if in different positions, they are "cows".
*/

#include <iostream>
#include <string.h>
#include <stdio.h>
#include "Game.h"
using namespace std;


int main(){

	Game g;

    cout << "Este jogo consiste em advinhares o numero em que estou a pensar,\nse os numeros estiverem certos e na posiçao certa é um bull, se estiverem certos mas na posiçao errada são cows.\n";
    
    int count = 10;
    while(count>0 && g.gameState()){
        g.setup(count);
    }
}

