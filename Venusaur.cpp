#include "Venusaur.h"

Venusaur::Venusaur() : EarthElement(), name("Venusaur") {
    health = 350;
    defence = 0.5;
    damage = 30;
    weakness = 'F';
    immunity = 'W';
}

Venusaur::Venusaur(std::string name) : EarthElement(), name(name) {
    health = 350;
    defence = 0.5;
    damage = 30;
    weakness = 'F';
    immunity = 'W';
}

Venusaur::~Venusaur() {}

std::string Venusaur::getName() {
    return name;
}
