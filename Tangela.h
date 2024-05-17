#ifndef TANGELA_H
#define TANGELA_H
#include "EarthPokemon.h"
class Tangela : public EarthPokemon {
public:
    Tangela();
    virtual void attack(Pokemon* opponent) = 0;
};
#endif