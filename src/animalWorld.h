#pragma once
#include <string>

class Continent;
class Herbivore;
class Carnivore;

class AnimalWorld
{
private:
    Herbivore** herbivores;
    Carnivore** carnivores;
    int herbivoreCount;
    int carnivoreCount;

    Herbivore* FindFirstAliveHerbivore() const;

public:
    AnimalWorld(Continent* continent, int herbivoreCount, int carnivoreCount);
    ~AnimalWorld();

    void MealsHerbivores();
    void NutritionCarnivores();
    void PrintState() const;
};
