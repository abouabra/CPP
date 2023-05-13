#include "Ice.hpp"
#include "AMateria.hpp"
#include <iostream>

Ice::Ice()
{
    this->type = "ice";
}

Ice::Ice(std::string const & type)
{
    this->type = type;
}
Ice::Ice(Ice& Ice)
{
    this->type = Ice.getType();
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
    
const std::string&  Ice::getType() const{
    return this->type;
}

Ice* Ice::clone() const
{
    return new Ice("ice");
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at "<< target.getName() <<" *" << std::endl;
}