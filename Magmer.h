#ifndef MAGMAR_H
#define MAGMAR_H
#include "FirePokemon.h"
class Magmar : public FirePokemon {
public:
    Magmar();
    virtual void attack(Pokemon* opponent) = 0;
    ~Magmar();
};
#endif
