#include "Raichu.h"
Raichu::Raichu() : LightPokemon("Raichu",95, 50, 20, "Light") {}
void Raichu::attack(Pokemon* opponent) {
    int damageDealt = getDamage();
    if (opponent->getElement() == "Earth") {
        damageDealt = damageDealt + 10;
    }
    opponent->takeDamage(damageDealt);
}
    Raichu::~Raichu() {};