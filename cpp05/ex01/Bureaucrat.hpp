#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Form;
#include "Form.hpp"

class Bureaucrat {
	private:
		Bureaucrat();
		std::string name;
		int grade;
	public:
		Bureaucrat(std::string const &name, int grade);
		Bureaucrat(Bureaucrat const &other);
		Bureaucrat const &operator=(Bureaucrat const &other);
		~Bureaucrat();

		std::string const &getName() const;
		int getGrade() const;

		void incrementGrade();
		void decrementGrade();
		void signForm(Form &form);

		class GradeTooHighException: public std::exception {
			const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif
