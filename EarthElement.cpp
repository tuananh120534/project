#include "EarthElement.h"

EarthElement::EarthElement() : Pokemon(), weakness('F'), immunity('W') {}

double EarthElement::damageMultiplier(Pokemon* enemy) const {
    if (enemy->getWeakness() == 'E') {
        return 1.5;
    }
    return 1.0;
}

char EarthElement::getWeakness() const {
    return weakness;
}

char EarthElement::getImmunity() const {
    return immunity;
}

void EarthElement::attack(Pokemon* enemy, Pokemon* player) {
    player->setDefence(player->getDefence() * 1.2);

    int remainingHealth = enemy->getHealth() - (player->getDamage()) * (enemy->getDefence()) * (enemy->damageMultiplier(player));
    enemy->setHealth(remainingHealth);
}
