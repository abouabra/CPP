#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ): ClapTrap(), ScavTrap(), FragTrap()
{
    this->Name = "Default";
    this->ClapTrap::Name = this->Name + "_clap_name";
    this->Hit_Points = FragTrap::getHP();
    this->Energy_Points = ScavTrap::getEP();
    this->Attack_Damage = FragTrap::getAD();
    std::cout << "DiamondTrap Default constructor called!" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap "<< this->Name <<" destructor called!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string Name):ClapTrap(Name),ScavTrap(Name),FragTrap(Name)
{
    this->Name = Name;
    this->ClapTrap::Name = this->Name + "_clap_name";
    this->Attack_Damage = FragTrap::getAD();
    this->Energy_Points = ScavTrap::getEP();
    this->Hit_Points = FragTrap::getHP();
    std::cout << "DiamondTrap "<< Name <<" constructor called!" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& DiamondTrap):ClapTrap(DiamondTrap),ScavTrap(DiamondTrap),FragTrap(DiamondTrap)
{
    this->Name = DiamondTrap.Name;
    this->ClapTrap::Name = DiamondTrap.Name + "_clap_name";
    this->Attack_Damage = DiamondTrap.Attack_Damage;
    this->Energy_Points = DiamondTrap.Energy_Points;
    this->Hit_Points = DiamondTrap.Hit_Points;
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

void	DiamondTrap::attack( const std::string &target )
{
    this->ScavTrap::attack(target);
}
void	DiamondTrap::whoAmI( void )
{
	std::cout << "My DiamondTrap Name is" << this->Name <<"and my ClapTrap Name is " << this->ClapTrap::Name << std::endl;
}