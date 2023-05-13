#include "AMateria.hpp"

AMateria::AMateria()
{
    this->type = "Default";
}

AMateria::AMateria(std::string const & type)
{
    this->type = type;
}
AMateria::AMateria(AMateria& AMateria)
{
    this->type = AMateria.getType();
}

AMateria& AMateria::operator = (AMateria& AMateria)
{
    if(this != &AMateria)
    {
        this->type = AMateria.getType();
    }
    return *this;
}

AMateria::~AMateria()
{

}
    
const std::string&  AMateria::getType() const{
    return this->type;
}

// AMateria* AMateria::clone() const

// virtual void use(ICharacter& target);