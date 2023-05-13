#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
class Dog: public Animal
{
private:
    Brain *brain;
public:
    Dog();
    Dog(Dog &dog);
    ~Dog();
    Dog& operator = (Dog &dog);
    
    std::string getType() const;
    void makeSound() const ;
};

#endif