#include "Weapon.hpp"

Weapon::Weapon() {
    this->type = "cub";

    std::cout << this->type << "Was constructed" << std::endl;
}

Weapon::Weapon (std::string type) {
    this->type = type;

    std::cout << this->type << "Was constructed" << std::endl;
}

Weapon::~Weapon () {
    std::cout << this->type << "Was deleted" << std::endl;
}