#pragma once
#include "Herbivore.h"

class Wildebeest : public Herbivore
{
private:
    int weight;
    bool alive;

public:
    Wildebeest(int weight = 120)
    {
        this->weight = weight;
        this->alive = true;
    }

    virtual std::string GetName() const
    {
        return "Wildebeest";
    }

    virtual int GetWeight() const
    {
        return this->weight;
    }

    virtual void SetWeight(int weight)
    {
        this->weight = weight;
    }

    virtual bool IsAlive() const
    {
        return this->alive;
    }

    virtual void SetAlive(bool alive)
    {
        this->alive = alive;
    }

    virtual void EatGrass()
    {
        if (this->alive)
        {
            this->weight += 10;
        }
    }
};
