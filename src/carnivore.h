#pragma once
#include <string>

class Herbivore;

class Carnivore
{
public:
    virtual ~Carnivore() {}

    virtual std::string GetName() const = 0;

    virtual int GetPower() const = 0;
    virtual void SetPower(int power) = 0;

    virtual void Eat(Herbivore* herbivore) = 0;
};
