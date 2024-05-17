#include "WaterPokemon.h"
WaterPokemon::WaterPokemon() : Pokemon("", 0, 0, 0, "Water") {}
WaterPokemon::WaterPokemon(string name, int health, int damage, int armor, string element)
    : Pokemon(name, health, damage, armor, "Water") {}
WaterPokemon::~WaterPokemon() {}