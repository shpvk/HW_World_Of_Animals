#include "Africa.h"
#include "Wildebeest.h"
#include "Lion.h"

Herbivore* Africa::CreateHerbivore()
{
    return new Wildebeest();
}

Carnivore* Africa::CreateCarnivore()
{
    return new Lion();
}
