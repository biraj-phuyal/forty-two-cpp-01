#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB{
    private:
        std::string name;
        Weapon *bukki;
    public:
        HumanB(std::string name);
        ~HumanB(void);
        void attack();
        void setWeapon(Weapon &bukki);

};

#endif
