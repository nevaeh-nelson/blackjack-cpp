#include "Blackjack.hpp"
#include <iostream>

BlackJack::BlackJack() : playersHand(), dealersHand(), deck() {}

//Main game of blackjack
void BlackJack::play() {
    std::cout << "Welcome to Blackjack!\n" << std::endl;
    
    //Shuffles the deck
    deck.shuffleDeck();

    //Deal the 2 initial cards to dealer and player
    for (int i = 0; i < 2; i++) {
        dealersHand.addCard(deck.dealCard());
        playersHand.addCard(deck.dealCard());
    }
    
    //Display for dealer
    dealersHand.displayHand(1);
    
    //Use default display
    playersHand.displayHand(0);

    char choice;
    
    while (true) {
        std::cout << "\nDo you want to hit (h) or stand (s)?";
        std::cin >> choice;
        
        if (choice == 'h')  {
            Card newCard = deck.dealCard();
            std::cout << "You drew: " << newCard.getName() << std::endl;
            playersHand.addCard(newCard);
            
            if (playersHand.getScore() > 21)
            {
                std::cout << "Busted! You went over 21. Dealer wins." << std::endl;
                break;
            }
        }else if (choice == 's'){
            break;
        }
    }
    
    if (playersHand.getScore() <= 21) {
        while (dealersHand.getScore() <= 16) {
            dealersHand.addCard(deck.dealCard());
        }
        
        std::cout << "The dealer's cards are: ";
        dealersHand.displayHand(1);
        
        if (dealersHand.getScore() > 21 || dealersHand.getScore() < playersHand.getScore())
        {
            std::cout << "Congratulations! You win!" << std::endl;
        }
        else
        {
            std::cout << "Sorry, dealer wins. Better luck next time!" << std::endl;
            
        }
    }

};
