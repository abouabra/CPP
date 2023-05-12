#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <string>

ScavTrap::ScavTrap():ClapTrap("Default",100,50,20)
{
    std::cout << "ScavTrap Default constructor called!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap "<< this->Name <<" destructor called!" << std::endl;
}

ScavTrap::ScavTrap(std::string Name):ClapTrap(Name,100,50,20)
{
    std::cout << "ScavTrap "<< Name <<" constructor called!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& Scavtrap)
{
    *this = Scavtrap;
    std::cout << "ScavTrap Copy constructor called!" << std::endl;
}

ScavTrap& ScavTrap:: operator = (ScavTrap& Scavtrap)
{
    if(this != &Scavtrap)
    {
        std::cout << "ScavTrap "<< Scavtrap.Name <<" copied into " << this->Name << std::endl;
        this->Name = Scavtrap.Name;
        this->Hit_Points = Scavtrap.Hit_Points;
        this->Energy_Points = Scavtrap.Energy_Points;
        this->Attack_Damage = Scavtrap.Attack_Damage;
    }
    return *this;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap "<< this->Name <<" is now in Gate keeper mode." << std::endl;
}

