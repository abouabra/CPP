#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include <ostream>

class Cure : public AMateria
{
protected:
    std::string type;
public:
    Cure();
    Cure(const Cure& Cure);

    Cure& operator = (const Cure& Cure);
    ~Cure();

    AMateria	*clone( void ) const;
	void		use( ICharacter &target );

};

#endif