#include "CardDeck.h"
#include "Card.h"
#include <cstdlib>
#include <ctime>

CardDeck::CardDeck() {
    initializeDeck();
    shuffleDeck();
}

void CardDeck::initializeDeck() {
    std::vector<std::string> suits{"Hearts", "Diamonds", "Clubs", "Spades"};
    std::vector<std::string> ranks{"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"};
    std::vector<int> values{2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 11};
   
    cards = {};

    for (int i = 0; i < suits.size(); ++i) {
        for (int j = 0; j < ranks.size(); ++j) {
            cards.push_back(Card(values[j], ranks[j] + " of " + suits[i]));
        }
    }
}

void CardDeck::shuffleDeck() {
    std::srand(std::time(0));
    initializeDeck();
    
    for (int i = 0; i < cards.size(); ++i) {
        int randomIndex = std::rand() % cards.size();
        std::swap(cards[i], cards[randomIndex]);
    }
}

Card CardDeck::dealCard() {
    if (cards.size() == 0) {
        return Card(0, "Empty");
    }
    
    Card card = cards.back();
    cards.pop_back();
    return card;
}



