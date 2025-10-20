#pragma once
#include "Carnivore.h"

class Lion : public Carnivore
{
private:
    int power;

public:
    Lion(int power = 200)
    {
        this->power = power;
    }

    virtual std::string GetName() const
    {
        return "Lion";
    }

    virtual int GetPower() const
    {
        return this->power;
    }

    virtual void SetPower(int power)
    {
        this->power = power;
    }

    virtual void Eat(Herbivore* herbivore);
};
