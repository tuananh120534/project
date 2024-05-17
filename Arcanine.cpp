#include "Arcanine.h"
Arcanine::Arcanine() : FirePokemon("Arcanine", 80, 29, 5, "Fire") {}
void Arcanine::attack(Pokemon* opponent) {
    int damageDealt = getDamage();
    if (opponent->getElement() == "Light") {
        damageDealt = damageDealt + 10;
    }
    opponent->takeDamage(damageDealt);
}
Arcanine::~Arcanine(){}