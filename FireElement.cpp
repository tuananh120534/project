#include "FireElement.h"

FireElement::FireElement() : Pokemon(), weakness('W'), immunity('E') {}

double FireElement::damageMultiplier(Pokemon* enemy) const {
    if (enemy->getWeakness() == 'F') {
        return 1.5;
    }
    return 1.0;
}

char FireElement::getWeakness() const {
    return weakness;
}

char FireElement::getImmunity() const {
    return immunity;
}

void FireElement::attack(Pokemon* enemy, Pokemon* player) {
    player->setDamage(player->getDamage() * 1.1);

    int remainingHealth = enemy->getHealth() - (player->getDamage()) * (enemy->getDefence()) * (enemy->damageMultiplier(player));
    enemy->setHealth(remainingHealth);
}
