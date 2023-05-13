#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal("WrongCat")
{
    std::cout << "WrongCat Default constructor called!" << std::endl;
}

WrongCat::WrongCat(WrongCat &cat):WrongAnimal(cat)
{
    std::cout << "WrongCat Copy constructor called!" << std::endl;
}
WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called!" << std::endl;
}

WrongCat& WrongCat::operator = (WrongCat &cat)
{
    if(this != &cat)
    {
        this->type = cat.getType();
    }
    std::cout << "WrongCat copy operator called!" << std::endl;
    return *this;
}

std::string WrongCat::getType() const
{
    return this->type;
}

void WrongCat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}