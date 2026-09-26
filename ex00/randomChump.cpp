#include "Zombie.hpp"

void randomChump(std::string name) {
    Zombie brain(name);
    brain.announce();
}
