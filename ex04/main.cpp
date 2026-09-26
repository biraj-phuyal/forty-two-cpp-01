#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cerrno>

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
        std::cout << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string string1 = argv[2];
    std::string string2 = argv[3];
    std::string content;
    char c;

    std::ifstream input(filename.c_str());
    if (!input) {
        std::cout << "Could not open file" << std::endl;
        return 1;
    }
    while (true) {
        errno = 0;
        if (!input.get(c))
            break;
        content += c;
    }
    if (input.bad() || !input.eof() || errno != 0) {
        std::cout << "Could not read file" << std::endl;
        return 1;
    }
    input.close();

    // Above is input. Below is output.

    std::ofstream output((filename + ".replace").c_str());
    if (!output) {
        std::cout << "Could not create replace file" << std::endl;
        return 1;
    }
    output << replace_all(string1, string2, content);
    output.close();
    if (!output) {
        std::cout << "Could not write replace file" << std::endl;
        return 1;
    }

    return 0;
}
