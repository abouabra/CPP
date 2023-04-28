
#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie zmb = Zombie(name);
    zmb.announce();
}