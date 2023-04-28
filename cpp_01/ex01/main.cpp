#include "Zombie.hpp"

int main(void)
{
    int N = 8;
    Zombie *pZmb = zombieHorde(N,"heap");
    for(int i = 0;i < N; i++)
        pZmb[i].announce();
    delete[] pZmb;
    return 0;
}