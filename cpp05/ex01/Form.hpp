// Make a Form class. It has a name, a boolean indicating whether it is signed (at
// the beginning, it’s not), a grade required to sign it, and a grade required to execute it.
// The name and grades are constant, and all these attributes are private (not protected).
// The grades are subject to the same constraints as in the Bureaucrat, and exceptions
// will be thrown if any of them are out of bounds, Form::GradeTooHighException and
// Form::GradeTooLowException.

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>

class Bureaucrat;
#include "Bureaucrat.hpp"

class Form {
	private:
		Form();
		const std::string name;
		bool ifsigned;
		const int signgrade;
		const int executegrade;
	public:
		Form(std::string const &name, int signgrade, int executegrade);
		Form(Form const &other);
		Form &operator=(Form const &other);
		~Form();

		std::string const &getName() const;
		bool issigned() const;
		int getSignGrade() const;
		int getExecuteGrade() const;

		void beSigned(const Bureaucrat &bureaucrat);

		class GradeTooHighException: public std::exception {
			const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, Form const &form);

#endif
