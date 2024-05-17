#ifndef ZAPDOS_H
#define ZAPDOS_H
#include "LightPokemon.h"
class Zapdos : public LightPokemon {
public:
    Zapdos();
    virtual void attack(Pokemon* opponent) = 0;
    ~Zapdos();
};
#endif