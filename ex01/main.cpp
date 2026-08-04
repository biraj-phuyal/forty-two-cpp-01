#include "Zombie.hpp"

int main() {
    Zombie *brain = zombieHorde(8, "biraj");

    int i;

    for (i = 0; i < 8; i++) {
        brain[i].announce();
    }
    
    delete [] brain;
}