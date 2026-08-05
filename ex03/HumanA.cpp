#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), bukki(weapon) {}

HumanA::~HumanA () {
    std::cout << this->name << "Was deleted" << std::endl;
}

void HumanA::attack(void) {
    std::cout << this->name << "Was constructed with" << this->bukki.getType() << std::endl;
}