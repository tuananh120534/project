#ifndef EARTHPOKEMON_H
#define EARTHPOKEMON_H
#include "Pokemon.h"
class EarthPokemon : public Pokemon {
public:
    EarthPokemon();
    EarthPokemon(string name, int health, int damage, int armor, string element);
    virtual void attack() = 0;
};
#endif
