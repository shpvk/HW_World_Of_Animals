#include "AnimalWorld.h"
#include "Continent.h"
#include "Herbivore.h"
#include "Carnivore.h"
#include <iostream>

AnimalWorld::AnimalWorld(Continent* continent, int herbivoreCount, int carnivoreCount)
{
    this->herbivoreCount = herbivoreCount;
    this->carnivoreCount = carnivoreCount;

    this->herbivores = new Herbivore * [herbivoreCount];
    this->carnivores = new Carnivore * [carnivoreCount];

    for (int i = 0; i < herbivoreCount; ++i)
    {
        this->herbivores[i] = continent->CreateHerbivore();
    }

    for (int i = 0; i < carnivoreCount; ++i)
    {
        this->carnivores[i] = continent->CreateCarnivore();
    }
}

AnimalWorld::~AnimalWorld()
{
    for (int i = 0; i < this->herbivoreCount; ++i)
    {
        delete this->herbivores[i];
    }

    for (int i = 0; i < this->carnivoreCount; ++i)
    {
        delete this->carnivores[i];
    }

    delete[] this->herbivores;
    delete[] this->carnivores;
}

Herbivore* AnimalWorld::FindFirstAliveHerbivore() const
{
    for (int i = 0; i < this->herbivoreCount; ++i)
    {
        if (this->herbivores[i]->IsAlive())
        {
            return this->herbivores[i];
        }
    }
    return nullptr;
}

void AnimalWorld::MealsHerbivores()
{
    for (int i = 0; i < this->herbivoreCount; ++i)
    {
        this->herbivores[i]->EatGrass();
    }
}

void AnimalWorld::NutritionCarnivores()
{
    for (int i = 0; i < this->carnivoreCount; ++i)
    {
        Herbivore* prey = this->FindFirstAliveHerbivore();
        if (prey == nullptr)
        {
            std::cout << "No alive herbivores left." << std::endl;
            return;
        }
        this->carnivores[i]->Eat(prey);
    }
}

void AnimalWorld::PrintState() const
{
    std::cout << "Herbivores: " << std::endl;

    for (int i = 0; i < this->herbivoreCount; ++i)
    {
        std::cout << this->herbivores[i]->GetName()
            << ", weight=" << this->herbivores[i]->GetWeight()
            << ", alive=";

        if (this->herbivores[i]->IsAlive())
        {
            std::cout << "yes";
        }
        else
        {
            std::cout << "no";
        }

        std::cout << std::endl;
    }


    std::cout << "Carnivores:" << std::endl;
    for (int i = 0; i < this->carnivoreCount; ++i)
    {
        std::cout << this->carnivores[i]->GetName()
            << ", power=" << this->carnivores[i]->GetPower()
            << std::endl;
    }
}
