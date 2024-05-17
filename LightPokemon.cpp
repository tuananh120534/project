#include "LightPokemon.h"
EarthPokemon::EarthPokemon() : Pokemon("", 0, 0, 0, "Light") {}
EarthPokemon::EarthPokemon(string name, int health, int damage, int armor, string element)
    : Pokemon(name, health, damage, armor, "Light") {}
LightPokemon::~LightPokemon() {}