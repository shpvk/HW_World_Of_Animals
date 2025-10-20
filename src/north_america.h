#pragma once
#include "Continent.h"

class NorthAmerica : public Continent
{
public:
    virtual std::string GetName() const
    {
        return "North America";
    }

    virtual Herbivore* CreateHerbivore();
    virtual Carnivore* CreateCarnivore();
};
