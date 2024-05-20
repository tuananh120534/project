#ifndef WATERELEMENT_H
#define WATERELEMENT_H

#include "Pokemon.h"

class WaterElement : public Pokemon {
protected:
    char weakness;
    char immunity;

public:
    WaterElement();

    virtual void attack(Pokemon* enemy, Pokemon* player) override;
    virtual double damageMultiplier(Pokemon* enemy) const override;

    virtual char getWeakness() const override;
    virtual char getImmunity() const override;
};

#endif
