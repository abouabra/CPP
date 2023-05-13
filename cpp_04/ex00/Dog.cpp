#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog():Animal("Dog")
{
    std::cout << "Dog Default constructor called!" << std::endl;
}

Dog::Dog(Dog &dog):Animal(dog)
{
    std::cout << "Dog Copy constructor called!" << std::endl;
}
Dog::~Dog()
{
    std::cout << "Dog destructor called!" << std::endl;
}

Dog& Dog::operator = (Dog &dog)
{
    if(this != &dog)
    {
        this->type = dog.getType();
    }
    std::cout << "Dog copy operator called!" << std::endl;
    return *this;
}

std::string Dog::getType() const
{
    return this->type;
}

void Dog::makeSound() const
{
    std::cout << "Haw Haw" << std::endl;
}