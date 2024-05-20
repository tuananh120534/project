#ifndef TRAINER_H
#define TRAINER_H

#include "Pokemon.h"
#include <string>

class Trainer {
private:
    Pokemon** Pokedex;
    int currentPokemon;
    const int maxPokemon;

public:
    Trainer();
    void addPokemon(Pokemon* newPokemon);
    void removePokemon(const std::string& name);
    virtual ~Trainer();
    Pokemon** getPokedex();
};

#endif
