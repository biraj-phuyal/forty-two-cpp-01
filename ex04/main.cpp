#include <iostream>
#include <fstream>
#include <sstream>
#include <string>


int main(int args, char **argv) {
    if (args != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string string1 = argv[2];
    std::string string2 = argv[3];
    std::string content;
    char c;
    
    std::ifstream input(filename.c_str());

    if (!input)
    {
        std::cerr << "Could not open file" << std::endl;
        return 1;
    }

    while(input.get(c))
        content += c;
    
    input.close();

    std::ofstream output((filename + ".replace").c_str());

    return 0;
}