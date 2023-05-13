#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>
class Dog: public Animal
{
public:
    Dog();
    Dog(Dog &dog);
    ~Dog();
    Dog& operator = (Dog &dog);
    
    std::string getType() const;
    void makeSound() const ;
};

#endif