#include "ICharacter.hpp"
#include <iostream>

ICharacter::ICharacter()
{
    this->name = "Default";
}

ICharacter::ICharacter(std::string name)
{
    this->name = name;
}
ICharacter::ICharacter(ICharacter& ICharacter)
{
    *this = ICharacter;
}

ICharacter& ICharacter::operator = (ICharacter& ICharacter)
{
    if(this != &ICharacter)
    {
        this->name = ICharacter.name;
    }
    return *this;
}