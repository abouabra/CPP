#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanA::HumanA(std::string Name, Weapon &weapon):weapon(weapon)
{
    this->name = Name;
}

HumanA::~HumanA()
{
    return;
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}