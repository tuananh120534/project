#include "Vaporeon.h"
Vaporeon::Vaporeon() : WaterPokemon("Vaporeon", 70, 30, 17, "Water") {}
void Vaporeon::attack(Pokemon* opponent) {
    int damageDealt = getDamage();
    if (opponent->getElement() == "Fire") {
        damageDealt = damageDealt + 10;
    }
    opponent->takeDamage(damageDealt);
}
Vaporeon::~Vaporeon(){}