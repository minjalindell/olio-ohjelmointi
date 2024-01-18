#include "game.h"
#include <iostream>
using namespace std;

Game::Game(int){
    cout<<"GAME CONTRUCTOR: object initialized with 10 as maximum value"<<endl;
    srand(time(0)); //asetetaan siemenluku kellonajan avulla
    maxNumber=10;
    randomNumber=rand()%maxNumber;
}

Game::~Game(){
    cout<<"GAME DESTRUCTOR: object cleared from stack memory"<<endl;
}
void Game::play(){
    while(playerGuess != randomNumber){
        cout<<"Give your guess between 1-10"<<endl;
        cin>>playerGuess;
        if(playerGuess==randomNumber){
            cout<<"Your guess is right = "<<randomNumber<<endl;
             numOfGuesses++;
            printGameResult();
        }
        else if(playerGuess<randomNumber){
            cout<<"Your guess is too small"<<endl;
        }
        else if(playerGuess>randomNumber){
            cout<<"Your guess is too big"<<endl;
        }
        numOfGuesses++;
    }
}

void Game::printGameResult(){
    cout<<"You guessed the right answer = "<<randomNumber<<" with "<<numOfGuesses<<" guesses"<<endl;
}
