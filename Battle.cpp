#include "Battle.h"
#include <iostream>

Battle::Battle() : Pokedex(nullptr), enemy(nullptr) {}

Battle::Battle(Pokemon** Pokedex, Pokemon* enemy) : Pokedex(Pokedex), enemy(enemy) {}

void Battle::playerTurn() {
    std::cout << "Player's turn." << std::endl;
    Pokedex[0]->attack(enemy, Pokedex[0]);
}

void Battle::computerTurn() {
    std::cout << "Computer's turn." << std::endl;
    enemy->attack(Pokedex[0], enemy);
}

std::string Battle::findWinner() {
    if (enemy->getHealth() <= 0) {
        return Pokedex[0]->getName();
    } else if (Pokedex[0]->getHealth() <= 0) {
        return enemy->getName();
    }
    return "No winner yet";
}
