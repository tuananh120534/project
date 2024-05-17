#include "Zapdos.h"
Zapdos::Zapdos() : LightPokemon("Zapdos", 110, 60, 10 ,"Light") {}
void Zapdos::attack(Pokemon* opponent) {
    int damageDealt = getDamage();
    if (opponent->getElement() == "Earth") {
        damageDealt = damageDealt + 10;
    }
    opponent->takeDamage(damageDealt);
    Zapdos::~Zapdos() {}
}