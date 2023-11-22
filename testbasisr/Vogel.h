#pragma once
#include "Dier.h"
#include <iostream>

class Vogel : public Dier {
public:
    void geluidMaken() const override {
        std::cout << "Vogel maakt geluid." << std::endl;
    }
};

