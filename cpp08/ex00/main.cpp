#include "easyfind.hpp"
#include <iostream>
#include <stack>
#include <list>

int	main()
{
	try
	{
		std::list<int> lst;
        lst.assign(5, 10);
        std::cout << *easyfind(lst, 10) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what()<< std::endl;
	}
	try
	{
		std::vector<int> vec;
		vec.assign(5, 10);
		std::cout << *easyfind(vec, 10) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::list<int> lst;
		std::cout << *easyfind(lst, 10) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::vector<int> vec;
		std::cout << *easyfind(vec, 10) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

// int main(void)
// {
// 	std::list<int>	int_list;
// 	std::vector<int> int_vector;
	
// 	int_list.push_back(42);
// 	int_list.push_back(4);
// 	int_list.push_back(8);
// 	int_list.push_back(25);

// 	int_vector.push_back(1);
// 	int_vector.push_back(2);
// 	int_vector.push_back(3);
	
// 	try{
// 		std::list<int>::iterator v_occur = easyfind(int_list, 25);
// 		std::cout << "Occurance of number in vector found: " << *v_occur << std::endl;
// 	}
// 	catch(std::exception &e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// 	try{
// 		std::vector<int>::iterator l_occur = easyfind(int_vector, 3);
// 		std::cout << "Occurance of number in list found: " << *l_occur << std::endl;
// 	}
// 	catch(std::exception &e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// }