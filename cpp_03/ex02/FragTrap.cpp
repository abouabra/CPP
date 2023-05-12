#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap("Default",100,100,30)
{
    std::cout << "FragTrap Default constructor called!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap "<< this->Name <<" destructor called!" << std::endl;
}

FragTrap::FragTrap(std::string Name):ClapTrap(Name,100,100,30)
{
    std::cout << "FragTrap "<< Name <<" constructor called!" << std::endl;
}

FragTrap::FragTrap(FragTrap& FragTrap)
{
    *this = FragTrap;
    std::cout << "FragTrap Copy constructor called!" << std::endl;
}

FragTrap& FragTrap:: operator = (FragTrap& FragTrap)
{
    if(this != &FragTrap)
    {
        std::cout << "FragTrap "<< FragTrap.Name <<" copied into " << this->Name << std::endl;
        this->Name = FragTrap.Name;
        this->Hit_Points = FragTrap.Hit_Points;
        this->Energy_Points = FragTrap.Energy_Points;
        this->Attack_Damage = FragTrap.Attack_Damage;
    }
    return *this;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap "<< this->Name <<" request high fives (press inter)" << std::endl;
    std::string line;
    getline(std::cin,line);
}

