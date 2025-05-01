#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if(gradeToSign < 1 || gradeToExecute < 1)
	{
		throw GradeTooHighException("Grade too high.");
	}
	else  if (gradeToSign > 150 || gradeToExecute > 150)
	{
		throw GradeTooLowException("Grade too low.");
	}
}

AForm ::~AForm()
{
	std::cout << "Form destructor called" << std::endl;
}

AForm::AForm(const AForm& form) : _name(form.getName()), _gradeToSign(form.getGradeToSign()), _gradeToExecute(form.getGradeToExecute())
{
}

AForm& AForm::operator=(const AForm& other)
{
	if(this != &other)
	{
		_signed = other.getSigned();
	}
	return (*this);
}
bool AForm::getSigned() const
{
	return (this->_signed);
}
void AForm::beSigned(const Bureaucrat& bureacrat)
{
	if(bureacrat.getGrade() > this->getGradeToSign())
	{
		throw GradeTooLowException("Grade is too low to sign the form.");
	}
	this-> _signed = true;
}
std::string AForm::getName() const
{
	return _name;
}
int AForm::getGradeToSign() const
{
	return _gradeToSign;
}

int AForm::getGradeToExecute() const
{
	return _gradeToExecute;
}

std::ostream& operator<<(std::ostream& os, const AForm& form)
{
	os << form.getName() + ", form is " + (form.getSigned() ? "signed" : "not signed")  << " and requires grade " << form.getGradeToSign() << " to sign and requires grade " << form.getGradeToExecute() << " to execute.";
	return os;
}

void AForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->_gradeToExecute)
		throw GradeTooLowException("Grade is too low to execute form");
	this->formAction();
}

AForm::GradeTooHighException::GradeTooHighException(const std::string &msg) : _msg(msg)
{
}

const char* AForm::GradeTooHighException::GradeTooHighException::what() const throw ()
{
	return (_msg.c_str());
}

AForm::GradeTooHighException::~GradeTooHighException() throw ()
{
}

AForm::GradeTooLowException::GradeTooLowException(const std::string &msg) : _msg(msg)
{
}

const char* AForm::GradeTooLowException::GradeTooLowException::what() const throw ()
{
	return (_msg.c_str());
}

AForm::GradeTooLowException::~GradeTooLowException() throw ()
{
}
