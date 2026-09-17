#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

std::string replace_all(std::string &s1, std::string &s2, std::string &content) {
    std::string result;
    std::string::size_type start = 0;
    std::string::size_type found;

    if (s1.empty())
        return content;

    found = content.find(s1, start);
    while (found != std::string::npos)
    {
        result.append(content, start, found - start);
        result += s2;

        start = found + s1.length();
        found = content.find(s1, start);
    }

    result.append(content, start, content.length() - start);
    return result;
}


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
    
    output << replace_all(string1, string2, content);
    return 0;
}