#include "Card.h"

Card::Card(int value, std::string name) : value(value), name(name) {}

int Card::getValue() const {
    return value;
}

std::string Card::getName() const {
    return name;
}

void Card::displayCard() const{
    std::cout << getName() << std::endl;
}
