#include "Magmar.h"
Magmar::Magmar() : FirePokemon("Magmar", 85, 29, 10, "Fire") {}
void Magmar::attack(Pokemon* opponent) {
    int damageDealt = getDamage();
    if (opponent->getElement() == "Light") {
        damageDealt = damageDealt + 10;
    }
    opponent->takeDamage(damageDealt);
}
Magmar::~Magmar(){}