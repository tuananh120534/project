#ifndef RAICHU_H
#define RAICHU_H
#include "LightPokemon.h"
class Raichu : public LightPokemon {
public:
    Raichu();
    virtual void attack(Pokemon* opponent) = 0;
    ~Raichu();
};
#endif