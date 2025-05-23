#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential pardon", 25, 5), target(target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& form) : AForm(form.getName(), form.getGradeToSign(), form.getGradeToExecute()), target(form.target)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& form)
{
	std::cout << "PresidentialPardonForm assignment operator called" << std::endl;
	if (this != &form)
	{
		AForm::operator=(form);
		this->target = form.target;
	}
	return (*this);
}

void PresidentialPardonForm::formAction() const 
{
	std::cout << this->target + " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
