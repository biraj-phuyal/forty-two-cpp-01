#include "Zombie.hpp"

Zombie* newZombie(std::string name) {
    Zombie *brain = new Zombie(name);
    return brain;
}

void randomChump(std::string name) {
    Zombie *brain = new Zombie(name);
    brain->announce();
    delete brain;
}