#include "Contact.hpp"

Contact::Contact()
{
    info[0] = "First Name";
    info[1] = "Last Name";
    info[2] = "Nickname";
    info[3] = "Phone number";
    info[4] = "Darkest Secret";
}

Contact::~Contact()
{
}

void Contact::print_preview(int index)
{
    std::cout << '|' << std::setw(10) << index;
    int i = 0;
    while(i < 3)
    {
        std::cout << '|';
        if(contact[i].length() > 10)
            std::cout << contact[i].substr(0, 9) << '.';
        else
            std::cout << std::setw(10) << contact[i];
        i++;
    }
    std::cout << '|' << std::endl;
}

void Contact::set_contact()
{
    int i = 0;
    while(i < 5)
    {
        std::cout << "Enter a " << info[i] << ": ";
        std::getline(std::cin, contact[i]);
        if(std::cin.eof() == true)
        {
            std::exit(0);
        }
        else
        {
            if(contact[i].empty())
            {
                std::cout << "Empty line, please try again." << std::endl;
                --i;
            }
        }
        i++;
    }
}

void Contact::print_contact()
{
    int i = 0;
    while(i < 5)
    {
        std::cout << info[i] << ": " << contact[i] << std::endl;
        i++;
    }
}