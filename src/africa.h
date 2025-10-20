#pragma once
#include "Continent.h"

class Africa : public Continent
{
public:
    virtual std::string GetName() const
    {
        return "Africa";
    }

    virtual Herbivore* CreateHerbivore();
    virtual Carnivore* CreateCarnivore();
};
