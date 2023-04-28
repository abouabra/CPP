#include "Zombie.hpp"

Zombie::Zombie(std::string Name)
{
    Zombie::name = Name;
}

Zombie::~Zombie()
{
    std::cout << Zombie::name << std::endl;
}

void Zombie::announce()
{
    std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}