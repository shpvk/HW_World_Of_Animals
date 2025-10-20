#pragma once

class Herbivore;
class Carnivore;

class Continent
{
public:
    virtual ~Continent() {}

    virtual std::string GetName() const = 0;

    virtual Herbivore* CreateHerbivore() = 0;
    virtual Carnivore* CreateCarnivore() = 0;
};
