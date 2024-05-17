#include "Charizard.h"
Charizard::Charizard() : FirePokemon("Charizard", 100, 35, 10, "Fire") {}
void Charizard::attack(Pokemon* opponent) {
    int damageDealt = getDamage();
    if (opponent->getElement() == "Light") {
        damageDealt = damageDealt + 10;
    }
    opponent->takeDamage(damageDealt);
}
Charizard::~Charizard(){}