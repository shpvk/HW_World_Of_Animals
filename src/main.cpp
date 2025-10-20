#include <iostream>
#include "Africa.h"
#include "NorthAmerica.h"
#include "AnimalWorld.h"

int main()
{
    Africa africa;
    AnimalWorld africanWorld(&africa, 3, 2);

    africanWorld.PrintState();
    africanWorld.MealsHerbivores();
    africanWorld.PrintState();
    africanWorld.NutritionCarnivores();
    africanWorld.PrintState();

    NorthAmerica northAmerica;
    AnimalWorld americanWorld(&northAmerica, 2, 3);

    americanWorld.PrintState();
    americanWorld.MealsHerbivores();
    americanWorld.PrintState();
    americanWorld.NutritionCarnivores();
    americanWorld.PrintState();

    return 0;
}
