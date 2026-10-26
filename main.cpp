//
//  main.cpp
//  Final Exam: Group Project
//
//  Names: Mario Dinberger, Nevaeh Nelson, Krystal Regalado
//  Date: Nov. 17, 2023
//  Description: Program which simulates the classic card game blackjack.

#include "BlackJack.hpp"
#include "Player.h"
#include <iostream>

using namespace std;

int main() 

{
    char playAgain;
    
    // Consecutive unique blackjack games
    do {
        // A game of blackjack
        BlackJack game;
        game.play();
        cout << "Play again? (y/n): " << endl;
        cin >> playAgain;
    } while (playAgain == 'y');
    
    
    return 0;
}
