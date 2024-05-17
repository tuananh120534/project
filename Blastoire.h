#ifndef BLASTOIRE_H
#define BLASTOIRE_H
#include "WaterPokemon.h"
class Blastoire : public WaterPokemon {
public:
    Blastoire();
    virtual void attack(Pokemon* opponent) = 0;
    ~Blastoire();
};
#endif