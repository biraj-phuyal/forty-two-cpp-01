#include "Weapon.hpp"

Weapon::Weapon() {
    this->type = "cub";

    std::cout << this->type << " was created" << std::endl;
}

Weapon::Weapon (std::string type) {
    this->type = type;

    std::cout << this->type << " was created" << std::endl;
}

Weapon::~Weapon () {
    std::cout << this->type << " was deleted" << std::endl;
}

std::string Weapon::getType() {
    return this->type;
}

void Weapon::setType(std::string type) {
    this->type = type;
}