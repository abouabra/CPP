#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap():ScavTrap(),FragTrap()
{
    std::cout << "DiamondTrap Default constructor called!" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap "<< this->Name <<" destructor called!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string Name):ScavTrap(Name),FragTrap(Name)
{
    std::cout << "DiamondTrap "<< Name <<" constructor called!" << std::endl;
    this->Name = Name.append("_clap_name");
    this->Attack_Damage = FragTrap::getAD();
    this->Energy_Points = FragTrap::getEP();
    this->Hit_Points = FragTrap::getHP();
}

DiamondTrap::DiamondTrap(DiamondTrap& DiamondTrap)
{
    *this = DiamondTrap;
    std::cout << "DiamondTrap Copy constructor called!" << std::endl;
}

DiamondTrap& DiamondTrap:: operator = (DiamondTrap& DiamondTrap)
{
    if(this != &DiamondTrap)
    {
        std::cout << "DiamondTrap "<< DiamondTrap.Name <<" copied into " << this->Name << std::endl;
        this->Name = DiamondTrap.Name;
        this->Hit_Points = DiamondTrap.Hit_Points;
        this->Energy_Points = DiamondTrap.Energy_Points;
        this->Attack_Damage = DiamondTrap.Attack_Damage;
    }
    return *this;
}
