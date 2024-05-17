#ifndef VAPOREON_H
#define VAPOREON_H
#include "WaterPokemon.h"
class Vaporeon : public WaterPokemon {
public:
    Vaporeon();
    virtual void attack(Pokemon* opponent) = 0;
    ~Vaporeon();
};
#endif