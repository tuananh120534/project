#ifndef JOLTEON_H
#define JOLTEON_H
#include "LightPokemon.h"
class Jolteon : public LightPokemon {
public:
    Jolteon();
    virtual void attack(Pokemon* opponent) = 0;
    ~Jolteon();
};
#endif