#include <iostream>
#include <string.h>
#include <stdio.h>
#include "Game.h"
using namespace std;



	Game::Game() : gameOn(true), numero("1234"){
	}


	void Game::logic(string n){
    	if(n==numero){
        	cout << "\nAcertaste o numero!!! Parabens!";
        	gameOn = false;
    	}else{
        	int cows =0;
       		int bulls =0;
        	for(int i =0; i<4; i++){
            	for(int j=0; j<4; j++){
                	if(j==i && n[i]==numero[j]){
                    	bulls++;
                	}
                	if(j!=i && n[i]==numero[j]){
                    	cows++;
                	}
            	}
        	}		

        cout << "Bulls: " <<bulls <<"\n";
        cout << "Cows: " <<cows <<"\n";
    	}
	}

	bool Game::gameState(){
		return gameOn;
	}

