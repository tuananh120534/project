#ifndef BLASTOISE_H
#define BLASTOISE_H

#include "WaterElement.h"
#include <string>

class Blastoise : public WaterElement {
private:
    std::string name;

public:
    Blastoise();
    Blastoise(std::string name);
    ~Blastoise();

    std::string getName() const override;
    std::string getName();
};

#endif
