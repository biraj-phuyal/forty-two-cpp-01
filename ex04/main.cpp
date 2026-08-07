#include <iostream>
#include <fstream>
#include <sstream>
#include <string>


int main(int args, char **argv) {
    if (args != 4) {
        std::cout << "Need 3 arguments to run the program!!!" << std::endl;
        return 0;
    }

    std::string filename = argv[1];
    std::string string1 = argv[2];
    std::string string2 = argv[3];
    std::string string;
    
}