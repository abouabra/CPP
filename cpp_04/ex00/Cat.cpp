#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat():Animal("Cat")
{
    std::cout << "Cat Default constructor called!" << std::endl;
}

Cat::Cat(Cat &cat):Animal(cat)
{
    std::cout << "Cat Copy constructor called!" << std::endl;
}
Cat::~Cat()
{
    std::cout << "Cat destructor called!" << std::endl;
}

Cat& Cat::operator = (Cat &cat)
{
    if(this != &cat)
    {
        this->type = cat.getType();
    }
    std::cout << "Cat copy operator called!" << std::endl;
    return *this;
}

std::string Cat::getType() const
{
    return this->type;
}

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}