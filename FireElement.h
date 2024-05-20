#ifndef FIREELEMENT_H
#define FIREELEMENT_H

#include "Pokemon.h"

class FireElement : public Pokemon {
protected:
    char weakness;
    char immunity;

public:
    FireElement();

    virtual void attack(Pokemon* enemy, Pokemon* player) override;
    virtual double damageMultiplier(Pokemon* enemy) const override;

    virtual char getWeakness() const override;
    virtual char getImmunity() const override;
};

#endif // FIREELEMENT_H
