#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy", 72, 45), target(target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& form) : AForm(form.getName(), form.getGradeToSign(), form.getGradeToExecute()), target(form.target)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& form)
{
	std::cout << "RobotomyRequestForm assignment operator called" << std::endl;
	if (this != &form)
	{
		AForm::operator=(form);
		this->target = form.target;
	}
	return (*this);
}

void RobotomyRequestForm::formAction() const 
{
	std::cout << "Drilling noises drrrrrr..." << std::endl;
	if (time(NULL) % 2 == 0)
		std::cout << this->target + " has been robotomized successfully" << std::endl;
	else
		std::cout << this->target + " failed to be robotomized" << std::endl;
}