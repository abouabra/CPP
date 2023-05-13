#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure()
{
    this->AMateria::type = "cure";
}

Cure::Cure(const Cure& Cure)
{
    this->AMateria::type = Cure.getType();
}

Cure& Cure::operator = (const Cure& Cure)
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
    
AMateria* Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals "<< target.getName() <<"'s wounds *" << std::endl;
}