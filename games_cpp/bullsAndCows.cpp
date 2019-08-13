//author: Tiago Gonçalves
/*
On a sheet of paper, the players each write a 4-digit secret number. The digits must be all different. 
Then, in turn, the players try to guess their opponent's number who gives the number of matches. 
If the matching digits are in their right positions, they are "bulls", if in different positions, they are "cows".
*/

#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

bool gameOn = true;

static string numero = "1234"; 


void logic(string n){
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

int main(){

    cout << "Este jogo consiste em advinhares o numero em que estou a pensar,\nse os numeros estiverem certos e na posiçao certa é um bull, se estiverem certos mas na posiçao errada são cows.\n";
    
    int count = 10;
    while(count>0 && gameOn){
        int n;
        cout << "\nTens "<<count<<" tentativas\n";
        cout << "Introduz um digito de 4 numeros: ";
        cin >> n;
        if(to_string(n).length()!=4 && !isdigit(n)){
            cout << "Tem de ser um numero com 4 digitos!!!\n";
            cin.clear();
            cin.ignore();
        }else{
            logic(to_string(n));
            count--;
        }
    }
}
