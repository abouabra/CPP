#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string Name)
{
    this->name = Name;
    this->weapon = NULL;
}

HumanB::~HumanB()
{
    return;
}

void HumanB::attack()
{
    if(this->weapon == NULL)
        std::cout << this->name << " don't have a weapon " << std::endl;
    else
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}