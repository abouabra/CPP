#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <iostream>
#include "Amateria.hpp"

class AMateria;

class ICharacter
{
protected:
    std::string name;
public:

    ICharacter();
    ICharacter(std::string name);
    ICharacter(ICharacter& ICharacter);

    ICharacter& operator = (ICharacter& ICharacter);

    virtual ~ICharacter() {}
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};

#endif