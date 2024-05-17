#ifndef GYARADOS_H
#define GYARADOS_H
#include "WaterPokemon.h"
class Gyarados : public WaterPokemon {
public:
    Gyarados();
    virtual void attack(Pokemon* opponent) = 0;
    ~Gyarados();
};
#endif