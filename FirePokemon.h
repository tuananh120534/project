#ifndef FIREPOKEMON_H
#define FIREPOKEMON_H
#include "Pokemon.h"
class FirePokemon : public Pokemon {
public:
    FirePokemon();
    FirePokemon(string name, int health, int damage, int armor, string element);
    virtual void attack()=0;
    ~FirePokemon();


};
#endif
