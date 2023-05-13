#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat():Animal("Cat")
{
    this->brain = new Brain;
    std::cout << "Cat Default constructor called!" << std::endl;
}

Cat::Cat(Cat &cat):Animal(cat)
{
    *this = cat;
    std::cout << "Cat Copy constructor called!" << std::endl;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat destructor called!" << std::endl;
}

Cat& Cat::operator = (Cat &cat)
{
    if(this != &cat)
    {
        this->type = cat.getType();
        this->brain = cat.brain;
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