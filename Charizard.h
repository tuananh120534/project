#ifndef CHARIZARD_H
#define CHARIZARD_H
#include "FirePokemon.h"
class Charizard : public FirePokemon {
public:
    Charizard();
    virtual void attack(Pokemon* opponent) = 0;
    ~Charizard();
};
#endif