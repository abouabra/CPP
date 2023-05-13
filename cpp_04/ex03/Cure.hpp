#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include <ostream>

class Cure : public AMateria
{
protected:
    std::string type;
    Cure();
public:
    Cure(std::string const & type);
    Cure(Cure& Cure);

    Cure& operator = (Cure& Cure);
    virtual ~Cure();
    
    std::string const & getType() const; //Returns the materia type
    virtual Cure* clone() const;
    virtual void use(ICharacter& target);
};

#endif