#include "NorthAmerica.h"
#include "Bison.h"
#include "Wolf.h"

Herbivore* NorthAmerica::CreateHerbivore()
{
    return new Bison();
}

Carnivore* NorthAmerica::CreateCarnivore()
{
    return new Wolf();
}
