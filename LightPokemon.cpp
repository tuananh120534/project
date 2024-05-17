#include "LightPokemon.h"
LightPokemon::LightPokemon() : Pokemon("", 0, 0, 0, "Light") {}
LightPokemon::LightPokemon(string name, int health, int damage, int armor, string element)
    : Pokemon(name, health, damage, armor, "Light") {}
LightPokemon::~LightPokemon() {}