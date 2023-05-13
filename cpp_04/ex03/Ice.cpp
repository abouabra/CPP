#include "Ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

Ice::Ice()
{
    this->AMateria::type = "ice";
}

Ice::Ice(const Ice& Ice)
{
    this->AMateria::type = Ice.type;
}

Ice& Ice::operator = (Ice& Ice)
{
    if(this != &Ice)
    {
        this->type = Ice.getType();
    }
    return *this;
}

Ice::~Ice()
{

}

AMateria* Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at "<< target.getName() <<" *" << std::endl;
}