#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>
class WrongCat: public WrongAnimal
{
public:
    WrongCat();
    WrongCat(WrongCat &WrongCat);
    ~WrongCat();
    WrongCat& operator = (WrongCat &WrongCat);
    
    std::string getType() const;
    void makeSound() const ;
};

#endif