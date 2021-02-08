#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name(""), grade(150) {};

Bureaucrat::Bureaucrat(std::string const &name, int grade) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
	{
		this->name = name;
		this->grade = grade;
	}

}
Bureaucrat::Bureaucrat(Bureaucrat const &other) {
	this->name = other.getName();
	this->grade = other.getGrade();
}

Bureaucrat const &Bureaucrat::operator=(Bureaucrat const &other) {
	this->name = other.getName();
	this->grade = other.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat() {}

std::string const &Bureaucrat::getName() const {
	return this->name;
}

int Bureaucrat::getGrade() const {
	return this->grade;
}

void Bureaucrat::incrementGrade() {
	if (grade > 1)
		grade--;
	else
		throw Bureaucrat::GradeTooHighException();

}
void Bureaucrat::decrementGrade() {
	if (grade > 150)
		grade++;
	else
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(Form &form) {
	try {
		form.beSigned(*this);
		std::cout << this->name << " signs " << form.getName() << std::endl;
	}
	catch (std::exception const &e) {
		std::cout << this->name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat) {
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "." << std::endl;
	return out;
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return "Grade is too high.";
};

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return "Grade is too low.";
};
