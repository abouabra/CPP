#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include <ostream>

class Ice : public AMateria
{
protected:
    std::string type;
public:
    Ice();
    Ice(const Ice& Ice);

    Ice& operator = (Ice& Ice);
    ~Ice();
    
    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif