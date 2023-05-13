#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Animal";
    std::cout << "Animal Default constructor called!" << std::endl;
}
Animal::Animal(std::string type)
{
    this->type = type;
    std::cout << "Animal Default constructor called!" << std::endl;
}

Animal::Animal(Animal &animal)
{
    *this = animal;
    std::cout << "Animal Copy constructor called!" << std::endl;
}
Animal::~Animal()
{
    std::cout << "Animal destructor called!" << std::endl;
}

Animal& Animal::operator = (Animal &animal)
{
    if(this != &animal)
    {
        this->type = animal.getType();
    }
    std::cout << "Animal copy operator called!" << std::endl;
    return *this;
}

std::string Animal::getType() const
{
    return this->type;
}

void Animal::makeSound() const
{
    std::cout << "Animal Sound" << std::endl;
}