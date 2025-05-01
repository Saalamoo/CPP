#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <fstream>

class Sed
{
public:
        Sed();
        ~Sed();
        void replace( std::string filename, std::string str1, std::string str2);
};

#endif