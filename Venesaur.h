#ifndef VENESAUR_H
#define VENESAUR_H
#include "EarthPokemon.h"
class Venesaur : public EarthPokemon {
public:
    Venesaur();
    virtual void attack(Pokemon* opponent) = 0;
    ~Venesaur();
};
#endif
