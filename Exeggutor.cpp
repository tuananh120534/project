#include "Exeggutor.h"
Exeggutor::Exeggutor() : EarthPokemon("Exeggutor", 85, 35, 20, "Earth") {}
void Exeggutor::attack(Pokemon* opponent) {
    int damageDealt = getDamage();
    if (opponent->getElement() == "Water") {
        damageDealt = damageDealt + 10;
    }
    opponent->takeDamage(damageDealt);
    Exeggutor::~Exeggutor() {}
}