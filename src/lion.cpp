#include "Lion.h"
#include "Herbivore.h"
#include <iostream>

void Lion::Eat(Herbivore* herbivore)
{
    if (herbivore == nullptr || !herbivore->IsAlive())
    {
        return;
    }

    if (this->power > herbivore->GetWeight())
    {
        this->power += 10;
        herbivore->SetAlive(false);
        std::cout << this->GetName() << " ate " << herbivore->GetName() << std::endl;
    }
    else
    {
        this->power -= 10;
        std::cout << this->GetName() << " failed to eat " << herbivore->GetName() << std::endl;
    }
}
