#pragma once
#include <string>

class Herbivore
{
public:
    virtual ~Herbivore() {}

    virtual std::string GetName() const = 0;
    virtual int GetWeight() const = 0;

    virtual void SetWeight(int weight) = 0;
    virtual void SetAlive(bool alive) = 0;

    virtual bool IsAlive() const = 0;

    virtual void EatGrass() = 0;
};
