#ifndef AFORM_HPP
# define  AFORM_HPP

# include <iostream>
# include <string>

class Bureaucrat;

class AForm
{
private:
		const std::string _name;
		bool _signed;
		const int _gradeToSign;
		const int _gradeToExecute;
		AForm();
public:
		AForm(const std::string name, int gradeToSign, int gradeToExecute);
		virtual ~AForm();
		AForm(const AForm& form);
		AForm& operator=(const AForm& other);

		std::string  getName() const;
		bool getSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		void beSigned(const Bureaucrat&  bureaucrat);
		void execute(Bureaucrat const & executor) const;
		virtual void formAction() const = 0;

		class GradeTooHighException : public std::exception
		{
		private:
			std::string _msg;
		public:
			GradeTooHighException (const std::string& msg);
			~GradeTooHighException() throw();
			const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
		private:
			std::string _msg;
		public:
			GradeTooLowException (const std::string& msg);
			~GradeTooLowException() throw();
			const char* what() const throw();

		};
};

std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif