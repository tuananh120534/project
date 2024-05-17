#include "Jolteon.h"
Jolteon::Jolteon() : LightPokemon("Jolteon", 90, 45, 25, "Light") {}
void Jolteon::attack(Pokemon* opponent) {
    int damageDealt = getDamage();
    if (opponent->getElement() == "Earth") {
        damageDealt = damageDealt + 10;
    }
    opponent->takeDamage(damageDealt);
    Jolteon::~Jolteon() {}
}