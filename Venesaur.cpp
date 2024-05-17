#include "Venesaur.h"
Venesaur::Venesaur() : EarthPokemon("Venesaur", 105, 45, 15, "Earth") {}
void Venesaur::attack(Pokemon* opponent) {
    int damageDealt = getDamage();
    if (opponent->getElement() == "Water") {
        damageDealt = damageDealt + 10; 
    }
    opponent->takeDamage(damageDealt);
}

    Venesaur::~Venesaur() {};