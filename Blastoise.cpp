#include "Blastoise.h"

Blastoise::Blastoise() : WaterElement(), name("Blastoise") {
    health = 800;
    defence = 0.8;
    damage = 60;
    weakness = 'E';
    immunity = 'F';
}

Blastoise::Blastoise(std::string name) : WaterElement(), name(name) {
    health = 800;
    defence = 0.8;
    damage = 60;
    weakness = 'E';
    immunity = 'F';
}

Blastoise::~Blastoise() {}

std::string Blastoise::getName() {
    return name;
}
