#pragma once
#include "Carnivore.h"

class Wolf : public Carnivore
{
private:
    int power;

public:
    Wolf(int power = 120)
    {
        this->power = power;
    }

    virtual std::string GetName() const
    {
        return "Wolf";
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
