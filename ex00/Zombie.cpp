#include "Zombie.hpp"

Zombie::Zombie() {
    this->name = "default";

    std::cout << this->name << " Was constructed" << std::endl;
}

Zombie::Zombie (std::string name) {
    this->name = name;

    std::cout << this->name << " Was constructed" << std::endl;
}

Zombie::~Zombie () {
    std::cout << this->name << " Was deleted" << std::endl;
}

void Zombie::announce() {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
