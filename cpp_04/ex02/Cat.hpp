#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
class Cat: public Animal
{
private:
    Brain *brain;
public:
    Cat();
    Cat(Cat &Cat);
    ~Cat();
    Cat& operator = (Cat &Cat);
    
    std::string getType() const;
    void makeSound() const ;
};

#endif