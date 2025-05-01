#include "PhoneBook.hpp"

int main()
{
    PhoneBook PhoneBook;
    while(1)
    {

        std::string input;
        std::cout << "Type one of these: ADD, SEARCH, or EXIT" << std::endl;
        std::getline(std::cin, input);
        if(std::cin.eof() == true)
        {
            std::exit(0);
        }
        else
        {
            if(input == "ADD")
                PhoneBook.add_contact();
            else if(input == "SEARCH")
                PhoneBook.search_phonebook();
            else if(input == "EXIT")
                break;
            else
                std::cout << "Wrong command try again." << std::endl;
        }
    }
}