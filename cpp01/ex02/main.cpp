#include <iostream>

int main()
{
    std::string strng = "HI THIS IS BRAIN";
    std::cout << "Printing memory address..." << std::endl;
    std::cout << &strng << std::endl;

    std::string *stringPTR = &strng;
    std::cout << stringPTR << std::endl;

    std::string &stringREF = strng;
    std::cout << &stringREF << std::endl;

    std::cout << "Printing the values..." << std::endl;
    std::cout << strng << std::endl;

    std::cout << *stringPTR << std::endl;

    std::cout << stringREF << std::endl;

    return (0);
}