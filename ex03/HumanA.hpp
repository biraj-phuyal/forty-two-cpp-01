#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA{
    private:
        std::string name;
        Weapon &bukki;
    public:
        HumanA(std::string name, Weapon &bukki);
        ~HumanA(void);
        void attack(void);
};

#endif