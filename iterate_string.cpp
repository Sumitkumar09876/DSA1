#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string text = "Hello world this is a test";
    std::istringstream iss(text);
    std::string word;

    while (iss >> word) {
        std::cout << word << std::endl;
    }

    return 0;
}
