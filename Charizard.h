#ifndef CHARIZARD_H
#define CHARIZARD_H

#include "FireElement.h"
#include <string>

class Charizard : public FireElement {
private:
    std::string name;

public:
    Charizard();
    Charizard(std::string name);
    ~Charizard();

std::string getName() const override;
std::string getName();
};

#endif
