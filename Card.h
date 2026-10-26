#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <string>

class Card {
public:
    // Constructor
    Card(int value, std::string name);
    
    // Getters
    int getValue() const;
    std::string getName() const;
    
    // Displays the card
    void displayCard() const;
    
private:
    int value;
    std::string name;
};

#endif
