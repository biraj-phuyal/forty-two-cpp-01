#include "Zombie.hpp"

int main() {
    Zombie *zombie = newZombie("biraj");
    zombie->announce();
    randomChump("shane");
    delete zombie;
}