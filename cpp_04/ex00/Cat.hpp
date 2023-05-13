#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>
class Cat: public Animal
{
public:
    Cat();
    Cat(Cat &Cat);
    ~Cat();
    Cat& operator = (Cat &Cat);
    
    std::string getType() const;
    void makeSound() const ;
};

#endif