#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "the address of string: [" << &str << "]\n";
    std::cout << "the address of string by using stringPTR: [" << stringPTR << "]\n";
    std::cout << "the address of string by using stringREF: [" << &stringREF << "]\n";
    std::cout << "the string using pointer: [" << *stringPTR << "]\n";
    std::cout << "the string using reference: [" << stringREF << "]\n";
    return (0);
}