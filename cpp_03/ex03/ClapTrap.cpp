#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->Name = "Default";
    this->Hit_Points = 10;
    this->Energy_Points = 10;
    this->Attack_Damage = 0;
    std::cout << "ClapTrap Default constructor called!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap "<< this->Name <<" destructor called!" << std::endl;
}

ClapTrap::ClapTrap(std::string Name)
{
    this->Name = Name;
    this->Hit_Points = 10;
    this->Energy_Points = 10;
    this->Attack_Damage = 0;
    std::cout << "ClapTrap "<< Name <<" constructor called!" << std::endl;

}

ClapTrap::ClapTrap(std::string Name,int Hit_Points, int Energy_Points, int Attack_Damage)
{
    this->Name = Name;
    this->Hit_Points = Hit_Points;
    this->Energy_Points = Energy_Points;
    this->Attack_Damage = Attack_Damage;
    std::cout << "ClapTrap "<< Name <<" constructor called!" << std::endl;

}
ClapTrap::ClapTrap(ClapTrap& claptrap)
{
    *this = claptrap;
    std::cout << "ClapTrap Copy constructor called!" << std::endl;
}

ClapTrap& ClapTrap:: operator = (ClapTrap& claptrap)
{
    if(this != &claptrap)
    {
        std::cout << "ClapTrap "<< claptrap.Name <<" copied into " << this->Name << std::endl;
        this->Name = claptrap.Name;
        this->Hit_Points = claptrap.Hit_Points;
        this->Energy_Points = claptrap.Energy_Points;
        this->Attack_Damage = claptrap.Attack_Damage;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if(this->Hit_Points <= 0)
    {
        std::cout << "ClapTrap "<< this->Name <<" cannot attack because he has no Hit Points lefts" << std::endl;
        return;
    }
    for(int i=0; i < this->Attack_Damage;i++)
    {
        if(this->Energy_Points <= 0)
        {
            std::cout << "ClapTrap "<< this->Name <<" has no Energy Points" << std::endl;
            return;
        }
        this->Energy_Points--;
    }
    std::cout << "ClapTrap "<< this->Name <<" attacks " << target << ", causing "<<this->Attack_Damage<<" points of damage!" << std::endl;    
}

void ClapTrap::takeDamage(unsigned int amount)
{
    for(unsigned int i=0; i < amount;i++)
    {
        if(this->Hit_Points <= 0)
        {
            std::cout << "ClapTrap "<< this->Name <<" has taken "<< amount << " of damage and has no Health Points left" << std::endl;
            return;
        }
        this->Hit_Points--;
    }
    std::cout << "ClapTrap "<< this->Name <<" has taken "<< amount << " and has "<<this->Hit_Points<<" points of Health left" << std::endl;    
}

void ClapTrap::beRepaired(unsigned int amount)
{
    for(unsigned int i=0; i < amount;i++)
    {
        if(this->Energy_Points <= 0)
        {
            std::cout << "ClapTrap "<< this->Name <<" has no Energy Points" << std::endl;
            return;
        }
        this->Energy_Points--;
        this->Hit_Points++;
    }
    std::cout << "ClapTrap "<< this->Name <<" has restored " << amount << " points of Health!" << std::endl;    
}

int ClapTrap::getHP()
{
    return this->Hit_Points;
}
int ClapTrap::getAD()
{
    return this->Attack_Damage;
}
int ClapTrap::getEP()
{
    return this->Energy_Points;
}
std::string ClapTrap::getName()
{
    return this->Name;
}