#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	{
		try {
			const AForm* form = new ShrubberyCreationForm("Home");
			Bureaucrat bureaucrat("George", 150);
			bureaucrat.executeForm(*form);
			delete(form);
		}
		catch (std::exception& ex)
		{
			std::cerr << ex.what() << std::endl;
		}
	}
	std::cout << "#######################################################\n#######################################################" << std::endl;
	{
		try {
			const AForm* form = new RobotomyRequestForm("Elfazoid");
			Bureaucrat bureaucrat("George", 150);
			bureaucrat.executeForm(*form);
			delete(form);
		}
		catch (std::exception& ex)
		{
			std::cerr << ex.what() << std::endl;
		}
	}
	std::cout << "#######################################################\n#######################################################" << std::endl;
	{
		try {
			const AForm* form = new PresidentialPardonForm("A cute cat");
			Bureaucrat bureaucrat("George", 150);
			bureaucrat.executeForm(*form);
			delete(form);
		}
		catch (std::exception& ex)
		{
			std::cerr << ex.what() << std::endl;
		}
	}
	std::cout << "#######################################################\n#######################################################" << std::endl;
	{
		try {
			const AForm* form = new ShrubberyCreationForm("Home");
			Bureaucrat bureaucrat("George", 1);
			bureaucrat.executeForm(*form);
			delete(form);
		}
		catch (std::exception& ex)
		{
			std::cerr << ex.what() << std::endl;
		}
	}
	std::cout << "#######################################################\n#######################################################" << std::endl;
	{
		try {
			const AForm* form = new RobotomyRequestForm("Elfazoid");
			Bureaucrat bureaucrat("George", 1);
			bureaucrat.executeForm(*form);
			delete(form);
		}
		catch (std::exception& ex)
		{
			std::cerr << ex.what() << std::endl;
		}
	}
	std::cout << "#######################################################\n#######################################################" << std::endl;
	{
		try {
			const AForm* form = new PresidentialPardonForm("A cute cat");
			Bureaucrat bureaucrat("George", 1);
			bureaucrat.executeForm(*form);
			delete(form);
		}
		catch (std::exception& ex)
		{
			std::cerr << ex.what() << std::endl;
		}
	}
	return (0);
}