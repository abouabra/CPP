#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "WrongAnimal";
    std::cout << "WrongAnimal Default constructor called!" << std::endl;
}
WrongAnimal::WrongAnimal(std::string type)
{
    this->type = type;
    std::cout << "WrongAnimal Default constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &animal)
{
    *this = animal;
    std::cout << "WrongAnimal Copy constructor called!" << std::endl;
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called!" << std::endl;
}

WrongAnimal& WrongAnimal::operator = (WrongAnimal &animal)
{
    if(this != &animal)
    {
        this->type = animal.getType();
    }
    std::cout << "WrongAnimal copy operator called!" << std::endl;
    return *this;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal Sound" << std::endl;
}