#ifndef BLACKJACK_H
#define BLACKJACK_H

#include "Player.h"
#include "CardDeck.h"


class BlackJack{
public:
    // Constructor
    BlackJack();
    
    // Play the Blackjack game
    void play();

private:
    Player playersHand;
    Player dealersHand;
    CardDeck deck;

};

#endif
