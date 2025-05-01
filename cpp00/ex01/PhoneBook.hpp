#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <sstream>
# include "Contact.hpp"
// # include "PhoneBook.hpp"

class PhoneBook
{
private:
    Contact contact[8];
    int index;
    int max_index;
public:
    PhoneBook();
    ~PhoneBook();
    void search_phonebook();
    void add_contact();
};

#endif