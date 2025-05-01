#ifndef BUREAUCRAT_HPP
# define  BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
private:
	std::string const name;
	int grade;
	Bureaucrat();
public:
	Bureaucrat(std::string const& name, int grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat &operator = (const Bureaucrat& rhs);

	std::string const	getName() const;
	int		getGrade() const;
	void	incrementGrade();
	void	decrementGrade();
	
	void        signForm( AForm& form );
	void        executeForm( const AForm& form ) const;  

	class GradeTooHighException : public std::exception
	{
	private:
		std::string _msg;
	public:
		GradeTooHighException (const std::string& msg);
		~GradeTooHighException() throw ();
		const char* what() const throw ();
	};

	class GradeTooLowException : public std::exception
	{
	private:
		std::string _msg;
	public:
		GradeTooLowException (const std::string& msg);
		~GradeTooLowException() throw ();
		const char* what() const throw ();

	};
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& r);

#endif
