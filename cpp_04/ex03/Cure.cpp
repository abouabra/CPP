#include "Cure.hpp"
#include "AMateria.hpp"
#include <iostream>

Cure::Cure()
{
    this->type = "cure";
}

Cure::Cure(std::string const & type)
{
    this->type = type;
}
Cure::Cure(Cure& Cure)
{
    this->type = Cure.getType();
}

Cure& Cure::operator = (Cure& Cure)
{
    if(this != &Cure)
    {
        this->type = Cure.getType();
    }
    return *this;
}

Cure::~Cure()
{

}
    
const std::string&  Cure::getType() const{
    return this->type;
}

Cure* Cure::clone() const
{
    return new Cure("cure");
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals "<< target.getName() <<"'s wounds *" << std::endl;
}