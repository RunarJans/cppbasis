#pragma once
#include "Dier.h"
#include <iostream>

class Habitat {
public:
    Habitat(Dier* dier) : bewoner(dier) {}

    void geluidVanBewoner() const {
        bewoner->geluidMaken();
    }

private:
    Dier* bewoner;
};
