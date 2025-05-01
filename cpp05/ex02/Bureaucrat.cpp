#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade) : name(name), grade(grade)
{
	if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException("Grade too high");
	}
	else if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException("Grade too low");
	}
}

Bureaucrat::~Bureaucrat()
{
}
 
Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade)
{
	*this = other;
}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat& rhs)
{
	if (this != &rhs)
		this->grade = rhs.getGrade();
	return (*this);
}

std::string const Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& r)
{
	o << r.getName() << " , bureaucrat grade " << r.getGrade() << ".";
	return o;
}

void Bureaucrat::incrementGrade()
{
	if (this->grade - 1 < 1)
	{
		throw Bureaucrat::GradeTooHighException("Grade too high to increment");
	}
	else
		this->grade--;
}

void Bureaucrat::decrementGrade()
{ 
	if (this->grade + 1 > 150)
	{
		throw Bureaucrat::GradeTooLowException("Grade too low to decrement");
	}
	else
		this->grade++;
}

void    Bureaucrat::signForm( AForm& form ) {
    try {
        form.beSigned( *this );
        std::cout << *this << " signed " << form.getName() << std::endl;
    } catch ( AForm::GradeTooLowException& e ) {
        std::cout << name << " coulnd't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

void    Bureaucrat::executeForm( const AForm& form ) const {
    try {
        form.execute( *this );
    } catch ( std::exception& e ) {
        std::cout << name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
    }
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const std::string &msg) : _msg(msg)
{
}

const char* Bureaucrat::GradeTooHighException::GradeTooHighException::what() const throw ()
{
	return (_msg.c_str());
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw ()
{
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const std::string &msg) : _msg(msg)
{
}

const char* Bureaucrat::GradeTooLowException::GradeTooLowException::what() const throw ()
{
	return (_msg.c_str());
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw ()
{
}
