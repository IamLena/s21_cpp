#include "Bureaucrat.hpp"

//Bureaucrat::GradeTooLowException
//Bureaucrat::GradeTooHighException

int main(void)
{
	{
		Bureaucrat a("Bob", 100);
		Bureaucrat b(a);
		Bureaucrat c = b;
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "c: " << c << std::endl;
	}

	try {
		Bureaucrat a ("Bob", -1);
	}
	catch (std::exception const &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat a ("Bob", 0);
	}
	catch (std::exception const &e) {
		std::cout << e.what() << std::endl;
	}

	Bureaucrat a ("Ann", 1);
	Bureaucrat b ("Bob", 60);
	Bureaucrat c ("Carl", 150);
	std::cout << a << b << c;

	try {
		Bureaucrat d ("Dave", 151);
	}
	catch (std::exception const &e) {
		std::cout << e.what() << std::endl;
	}
}
