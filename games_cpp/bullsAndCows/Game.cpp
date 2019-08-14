#include <iostream>
#include <string.h>
#include <stdio.h>
#include "Game.h"
using namespace std;



    Game::Game() : gameOn(true), numero("1234"), count(10){
    }
    
    
    void Game::setup(){
        int n;
        cout << "\nTens "<<count<<" tentativas\n";
        cout << "Introduz um digito de 4 numeros: ";
        cin >> n;
        if(to_string(n).length()!=4 && !isdigit(n)){
            cout << "Tem de ser um numero com 4 digitos!!!\n";
            cin.clear();
            cin.ignore(10000, '\n');
           
        }else{
            logic(to_string(n));
            count--;
        }
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
    
    bool Game::playGame(){
        string p;
        
        if(count ==0 || gameOn == false){
            cout << "\nJogar novamente (y/n)?\n";
            cin >> p;
            if(p=="y"){
                count=10;
                gameOn = true;
                return true;
            }else{
                return false;
            }
        }else{
            return false;
        }
    }
    
    int Game::getCount(){
        return count;
    }

