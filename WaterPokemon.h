#ifndef WATERPOKEMON_H
#define WATERPOKEMON_H
#include "Pokemon.h"
class WaterPokemon : public Pokemon {
public:
    WaterPokemon();
    WaterPokemon(string name, int health, int damage, int armor, string element);
    virtual void attack()=0;
    ~WaterPokemon();


};
#endif