#ifndef EXEGGUTOR_H
#define EXEGGUTOR_H
#include "EarthPokemon.h"
class Exeggutor : public EarthPokemon {
public:
    Exeggutor();
    virtual void attack(Pokemon* opponent) = 0;
};
#endif
