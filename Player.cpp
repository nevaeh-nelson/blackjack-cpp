#include "Player.h"

void Player::addCard(const Card& card) {
    hand.push_back(card);
}

int Player::getScore() const {
    int score = 0;
    
    // Counter for the aces
    int numAces = 0;

    for (int i = 0; i < hand.size(); i++) {
        score += hand[i].getValue();

        // Counter the number of aces in the hand
        if (hand[i].getValue() == 11) {
            ++numAces;
        }
    }
    
    // Adjust the score for aces if necessary
    while (numAces > 0 && score > 20) {
        score -= 10;
        --numAces;
    }
    
    return score;
}

// If the hand is the dealer's, only display the first card
void Player::displayHand(bool isDealer) const  {
    if (isDealer) {
        std::cout << "Dealer's Hand:\n" << hand[0].getName() << " and one face-down card.\n" << std::endl;
    }else{
        std::cout << "Your Hand:" << std::endl;
        
        // Error checking
        if (hand.size() == 0) {
            std::cout << "Empty" << std::endl;
        }
        for (int i = 0; i < hand.size(); i++) {
            hand[i].displayCard();
        }
        std::cout << "\nTotal Score: " << getScore() << std::endl;
    }
}

  
