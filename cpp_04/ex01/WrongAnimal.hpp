#ifndef Animal_HPP
#define Animal_HPP

#include <iostream>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(std::string type);
    WrongAnimal(WrongAnimal &animal);
    ~WrongAnimal();
    WrongAnimal& operator = (WrongAnimal &animal);
    
    std::string getType() const;
    void makeSound() const;
};

#endif