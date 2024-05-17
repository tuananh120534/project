#include "Gyarados.h"
Gyarados::Gyarados() : WaterPokemon("Gyarados", 110, 20, 6, "Water") {}
void Gyarados::attack(Pokemon* opponent) {
    int damageDealt = getDamage();
    if (opponent->getElement() == "Fire") {
        damageDealt = damageDealt + 10;
    }
    opponent->takeDamage(damageDealt);
}
Gyarados::~Gyarados(){}