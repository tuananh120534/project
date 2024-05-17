#include "FirePokemon.h"
FirePokemon::FirePokemon() : Pokemon("", 0, 0, 0, "Fire") {}
FirePokemon::FirePokemon(string name, int health, int damage, int armor, string element)
    : Pokemon(name, health, damage, armor, "Fire") {}
FirePokemon::~FirePokemon() {}