#ifndef CARD_DECK_H
#define CARD_DECK_H

#include "Card.h"
#include <iostream>
#include <string>
#include <vector>

class CardDeck {
public:
    // Constructor
    CardDeck();
    
    // Initialize and shuffle the deck
    void initializeDeck();
    void shuffleDeck();
    
    // Deal a card from the deck
    Card dealCard();

private:
    std::vector<Card> cards;
};

#endif




