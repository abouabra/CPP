#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class ICharacter;

class AMateria{
protected:
    std::string type;
    AMateria();
public:
    AMateria(std::string const & type);
    AMateria(AMateria& AMateria);

    AMateria& operator = (AMateria& AMateria);
    virtual ~AMateria();
    
    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif