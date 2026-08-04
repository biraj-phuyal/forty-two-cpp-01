#include "Zombie.hpp"

void randomChump(std::string name) {
    Zombie *brain = new Zombie(name);
    brain->announce();
    delete brain;
}