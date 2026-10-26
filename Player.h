#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include "Card.h"

class Player {
public:
    // Adds a card to the player's hand
    void addCard(const Card& card);
    
    // Calculates the total score of the hand
    int getScore() const;
    
    // Displays the player's hand
    void displayHand(bool isDealer) const;

private:
    std::vector<Card> hand;
};

#endif
