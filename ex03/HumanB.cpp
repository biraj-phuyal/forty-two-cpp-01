#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), bukki(0) {}

HumanB::~HumanB () {
    std::cout << this->name << " was deleted" << std::endl;
}

void HumanB::attack() {
    if (!this->bukki) {
        std::cout << this->name << " has no weapon" << std::endl;
        return;
    }
    std::cout << this->name << " attacks with their " << this->bukki->getType() << std::endl; 
}

void HumanB::setWeapon(Weapon &bukki) {
    this->bukki = &bukki;
}
