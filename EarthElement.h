#ifndef EARTHELEMENT_H
#define EARTHELEMENT_H

#include "Pokemon.h"

class EarthElement : public Pokemon {
protected:
    char weakness;
    char immunity;

public:
    EarthElement();

    virtual void attack(Pokemon* enemy, Pokemon* player) override;
    virtual double damageMultiplier(Pokemon* enemy) const override;

    virtual char getWeakness() const override;
    virtual char getImmunity() const override;
};

#endif
