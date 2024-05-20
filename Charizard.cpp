#include "Charizard.h"

Charizard::Charizard() : FireElement(), name("Charizard") {
    health = 250;
    defence = 0.9;
    damage = 150;
    weakness = 'W';
    immunity = 'E';
}

Charizard::Charizard(std::string name) : FireElement(), name(name) {
    health = 250;
    defence = 0.9;
    damage = 150;
    weakness = 'W';
    immunity = 'E';
}

Charizard::~Charizard() {}

std::string Charizard::getName() {
    return name;
}
