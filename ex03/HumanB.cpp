#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon *weapon) : name(name), bukki(weapon) {}

HumanB::~HumanB () {
    std::cout << this->name << " was deleted" << std::endl;
}

void HumanB::attack() {
    std::cout << this->name << " attacks with their " << this->bukki->getType() << std::endl; 
}

void HumanB::setWeapon(Weapon *bukki) {
    this->bukki = bukki;
}
