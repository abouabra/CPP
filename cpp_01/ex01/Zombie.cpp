#include "Zombie.hpp"

Zombie::Zombie(void)
{
    return;
}

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

void Zombie::SetName(std::string Name)
{
    Zombie::name = Name;
}