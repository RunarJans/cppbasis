#pragma once

class Dier {
public:
    virtual void geluidMaken() const = 0; // Pure virtual function
    virtual ~Dier() = default;            // Virtual destructor
};
