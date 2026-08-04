#include "Zombie.hpp"

Zombie* newZombie(std::string name) {
    Zombie *brain = new Zombie(name);
    return brain;
}
