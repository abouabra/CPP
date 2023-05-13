#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(std::string type);
    Animal(Animal &animal);
    ~Animal();
    Animal& operator = (Animal &animal);
    
    std::string getType() const;
    void virtual makeSound() const;
};

#endif