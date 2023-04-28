#include "Weapon.hpp"

Weapon::Weapon(std::string Type)
{
    this->type = Type;
}

Weapon::~Weapon()
{
    return;
}

const std::string Weapon::getType() 
{
    return this->type;
}

void Weapon::setType(std::string Type)
{
    this->type = Type;
}