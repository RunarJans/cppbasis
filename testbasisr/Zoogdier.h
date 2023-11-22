#pragma once
#include "Dier.h"
#include <iostream>

class Zoogdier : public Dier {
public:
    void geluidMaken() const override {
        std::cout << "Zoogdier maakt geluid." << std::endl;
    }
};


