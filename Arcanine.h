#ifndef ARCANINE_H
#define ARCANINE_H
#include "FirePokemon.h"
class Arcanine : public FirePokemon {
public:
    Arcanine();
    virtual void attack(Pokemon* opponent) = 0;
    ~Arcanine();
};
#endif