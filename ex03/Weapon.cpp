#include "Weapon.hpp"

Weapon::Weapon() {
    this->type = "default";

    std::cout << this->type << " was created" << std::endl;
}

Weapon::Weapon (std::string type) {
    this->type = type;

    std::cout << this->type << " was created" << std::endl;
}

Weapon::~Weapon () {
    std::cout << this->type << " was deleted" << std::endl;
}

const std::string &Weapon::getType() const {
    return this->type;
}

void Weapon::setType(std::string type) {
    this->type = type;
}
