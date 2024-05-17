#include "Tangela.h"
Tangela::Tangela() : EarthPokemon("Tangela", 75, 30, 17, "Earth") {}
void Tangela::attack(Pokemon* opponent) {
    int damageDealt = getDamage();
    if (opponent->getElement() == "Water") {
        damageDealt = damageDealt + 10;
    }
    opponent->takeDamage(damageDealt);
}
    Tangela::~Tangela() {};