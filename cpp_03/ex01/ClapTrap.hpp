#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap{
protected:
    std::string Name;
    int Hit_Points;
    int Energy_Points;
    int Attack_Damage;
public:
    ClapTrap();
    ~ClapTrap();
    ClapTrap(ClapTrap& claptrap);
    ClapTrap& operator = (ClapTrap& claptrap);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    int getHP();
    int getEP();
    int getAD();
    std::string getName();
    ClapTrap(std::string name,int Hit_Points, int Energy_Points, int Attack_Damage);
};

#endif