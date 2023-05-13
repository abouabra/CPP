#include "ScavTrap.hpp"

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

ScavTrap::ScavTrap(ScavTrap& ScavTrap):ClapTrap(ScavTrap.Name,ScavTrap.Hit_Points,ScavTrap.Energy_Points,ScavTrap.Attack_Damage)
{
    std::cout << "ScavTrap " <<this->Name << " Copy constructor called!" << std::endl;
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

int ScavTrap::getHP()
{
    return 100;
}
int ScavTrap::getAD()
{
    return 20;
}
int ScavTrap::getEP()
{
    return 50;
}
std::string ScavTrap::getName()
{
    return this->Name;
}