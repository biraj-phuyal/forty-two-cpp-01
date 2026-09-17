#include "Harl.hpp"

int main(int args, char **argv) {
    Harl karren;

    if (args == 1 || args > 2)
    {
        karren.complain("INFO");
        karren.complain("WARNING");
        karren.complain("ERROR");
        karren.complain("DEBUG");
        return 0;
    }
    if (args == 2)
        karren.complain(argv[1]);
    else
        return 0;
}