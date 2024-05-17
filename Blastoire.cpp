#include "Blastoire.h"
Blastoire::Blastoire() : WaterPokemon("Blastoire", 120, 21, 5, "Water") {}
void Blastoire::attack(Pokemon* opponent) {
    int damageDealt = getDamage();
    if (opponent->getElement() == "Fire") {
        damageDealt = damageDealt + 10;
    }
    opponent->takeDamage(damageDealt);
}
Blastoire::~Blastoire(){}