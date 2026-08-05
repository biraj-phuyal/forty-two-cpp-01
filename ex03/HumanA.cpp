#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), bukki(weapon) {}

HumanA::~HumanA () {
    std::cout << this->name << " was deleted" << std::endl;
}

void HumanA::attack() {
    std::cout << this->name << " attacks with their " << this->bukki.getType() << std::endl; 
}