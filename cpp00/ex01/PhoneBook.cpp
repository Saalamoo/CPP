#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    index = 0;
    max_index = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::search_phonebook()
{
    if(max_index > 0)
    while(1)
    {
        std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
        std::string input;
        int i = 0;
        while(i < max_index)
        {
            contact[i].print_preview(i + 1);
            i++;
        }
        std::getline(std::cin, input);
        if(std::cin.eof() == true)
        {
            std::exit(0);
        }
        else
        {
            std::stringstream tmp(input);
            int index = 0;
            tmp >> index;
            if(index <= 0 || index > max_index)
            {
                std::cout << "Wrong input try again." << std::endl;
                continue;
            }
            contact[index - 1].print_contact();
            break;
        }
    }
    else
        std::cout << "No contacts please add a contact." << std::endl;

}

void PhoneBook::add_contact()
{
    if(index > 7)
        index = 0;
    contact[index].set_contact();
    if(max_index < 8)
        max_index++;
    index++;
}