#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
    std::string name;
public:
    Zombie(void);
    Zombie(std::string Name);
    ~Zombie();
    void announce( void );
    void SetName(std::string Name);
};

Zombie* zombieHorde( int N, std::string name );

#endif