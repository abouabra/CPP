
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *Zmb = new Zombie[N];
    for (int i = 0; i < N; i++) {
        Zmb[i].SetName(name);
    }
    return Zmb;
}