#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include <ostream>

class Ice : public AMateria
{
protected:
    std::string type;
    Ice();
public:
    Ice(std::string const & type);
    Ice(Ice& Ice);

    Ice& operator = (Ice& Ice);
    virtual ~Ice();
    
    std::string const & getType() const; //Returns the materia type
    virtual Ice* clone() const;
    virtual void use(ICharacter& target);
};

#endif