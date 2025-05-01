#include "Sed.hpp"

Sed::Sed()
{
}

Sed::~Sed()
{
}

void Sed::replace(std::string filename, std::string str1, std::string str2)
{
    //check if its necessary
    if (filename.empty() || str1.empty() || str2.empty())
    {
        std::cerr << "Error: empty arg." << std::endl;
        return;
    }

    std::string output_name = filename + ".replace";
    std::ifstream input(filename.c_str());
    if (!input.is_open())
    {
        std::cerr << "Error: couldn't open " << filename << std::endl;
        return;
    }

    std::string content;
    if (std::getline(input, content, '\0'))
    {
        std::ofstream output(output_name.c_str());
        if (!output.is_open())
        {
            std::cerr << "Error: couldn't open " << output_name << std::endl;
            input.close();
            return;
        }
        size_t pos = content.find(str1);
        while (pos != std::string::npos)
        {
            content.erase(pos, str1.length());
            content.insert(pos, str2);
            pos = content.find(str1);
        }
        output << content << '\n';
        output.close();
    }
    else
    {
        std::cerr << "Empty file found." << std::endl;
    }

    input.close();
}
