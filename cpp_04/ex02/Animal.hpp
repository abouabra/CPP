#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
    std::string type;
    Animal();
    Animal(std::string type);
    Animal(Animal &animal);
    Animal& operator = (Animal &animal);
public:
    virtual ~Animal();
    
    std::string getType() const;
    void virtual makeSound() const;
};

#endif