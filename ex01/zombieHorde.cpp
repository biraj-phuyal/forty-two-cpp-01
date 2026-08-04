#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    int i;

    Zombie *brain = new Zombie[N];

    for (i = 0; i < N; i++) {
        brain[i] = name;
    }
    return (brain);
}