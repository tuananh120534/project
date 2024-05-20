#include "WaterElement.h"

WaterElement::WaterElement() : Pokemon(), weakness('E'), immunity('F') {}

double WaterElement::damageMultiplier(Pokemon* enemy) const {
    if (enemy->getWeakness() == 'W') {
        return 1.5;
    }
    return 1.0;
}

char WaterElement::getWeakness() const {
    return weakness;
}

char WaterElement::getImmunity() const {
    return immunity;
}

void WaterElement::attack(Pokemon* enemy, Pokemon* player) {
    player->setHealth(player->getHealth() * 1.1);

    int remainingHealth = enemy->getHealth() - (player->getDamage()) * (enemy->getDefence()) * (enemy->damageMultiplier(player));
    enemy->setHealth(remainingHealth);
}
