#include "EarthPokemon.h"
EarthPokemon::EarthPokemon() : Pokemon("", 0, 0, 0, "Earth") {}
EarthPokemon::EarthPokemon(string name, int health, int damage, int armor, string element)
    : Pokemon(name, health, damage, armor, "Earth") {}
EarthPokemon::~EarthPokemon() {}