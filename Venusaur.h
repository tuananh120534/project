#ifndef VENUSAUR_H
#define VENUSAUR_H

#include "EarthElement.h"
#include <string>

class Venusaur : public EarthElement {
private:
    std::string name;

public:
    Venusaur();
    Venusaur(std::string name);
    ~Venusaur();
    std::string getName() const override;
    std::string getName();

};

#endif
