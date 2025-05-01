#include <iostream>
#include <cctype>

int main(int argc, char *argv[]) 
{
    if (argc == 1) 
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    } 
    else 
    {
        int i = 1;
        while (i < argc) 
        {
            int j = 0;
            while(argv[i][j] != '\0')
            {
                if(isalpha(argv[i][j]))
                    argv[i][j] = (char)toupper(argv[i][j]);
                j++;
            }
            std::cout << argv[i];
            std::cout << ' ';
            i++;
        }
        std::cout << std::endl;
    }
    return 0;
}
