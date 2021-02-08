#include "Form.hpp"

Form::Form() : name(""), ifsigned(false), signgrade(150), executegrade(150) {}
Form::Form(std::string const &name, int signgrade, int executegrade) : name(name), ifsigned(false), signgrade(signgrade), executegrade(executegrade) {
	if (signgrade < 1 || executegrade < 1)
		throw Form::GradeTooHighException() ;
	if (signgrade > 150 || executegrade > 150)
		throw Form::GradeTooLowException() ;
}
Form::Form(Form const &other) : name(other.getName()), ifsigned(other.issigned()), signgrade(other.getSignGrade()), executegrade(other.getExecuteGrade()) {}

Form &Form::operator=(Form const &other) {
	this->~Form();
	new (this) Form(other);
	return *this;
}
Form::~Form() {}

std::string const &Form::getName() const{
	return this->name;
}
bool Form::issigned() const {
	return this->ifsigned;
}
int Form::getSignGrade() const {
	return this->signgrade;
}
int Form::getExecuteGrade() const {
	return this->executegrade;
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() <= this->signgrade)
		this->ifsigned = true;
	else
		throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw(){
	return "Grade is too high.";
};

const char* Form::GradeTooLowException::what() const throw(){
	return "Grade is too low.";
};

std::ostream &operator<<(std::ostream &out, Form const &form) {
	out << "Form " << form.getName();
	if (form.issigned())
		out << "; signed; ";
	else
		out << "; not signed; ";
	out << "sign grade: " << form.getSignGrade();
	out << "; execute grade: " << form.getExecuteGrade() << "." << std::endl;
	return out;
}
