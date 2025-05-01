#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
// # include <string.h>
# include <string>
// # include "PhoneBook.hpp"
# include "Contact.hpp"

class Contact
{
private:
        std::string contact[5];
        std::string info[5];
public:
        Contact();
        ~Contact();
        void set_contact();
        void print_preview(int index);
        void print_contact();
};

#endif