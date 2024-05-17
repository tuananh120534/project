#ifndef LIGHTPOKEMON_H
#define LIGHTPOKEMON_H
#include "Pokemon.h"
class LightPokemon : public Pokemon {
public:
    LightPokemon();
    LightPokemon(string name, int health, int damage, int armor, string element);
    virtual void attack() = 0;
    ~LightPokemon();
};
#endif
