#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	// {
	// 	Bureaucrat a("Bob", 100);
	// 	Bureaucrat b(a);
	// 	Bureaucrat c = b;
	// 	std::cout << "a: " << a << std::endl;
	// 	std::cout << "b: " << b << std::endl;
	// 	std::cout << "c: " << c << std::endl;
	// }

	// try {
	// 	Bureaucrat a ("Bob", -1);
	// }
	// catch (std::exception const &e) {
	// 	std::cout << e.what() << std::endl;
	// }

	// try {
	// 	Bureaucrat a ("Bob", 0);
	// }
	// catch (std::exception const &e) {
	// 	std::cout << e.what() << std::endl;
	// }

	// Bureaucrat a ("Ann", 1);
	// Bureaucrat b ("Bob", 60);
	// Bureaucrat c ("Carl", 150);
	// std::cout << a << b << c;

	// try {
	// 	Bureaucrat d ("Dave", 151);
	// }
	// catch (std::exception const &e) {
	// 	std::cout << e.what() << std::endl;
	// }

	try {
		Form f("f1", 0, 20);
	}
	catch (std::exception const &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Form f("f1", 20, 0);
	}
	catch (std::exception const &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Form f("f1", 151, 20);
	}
	catch (std::exception const &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Form f("f1", 20, 151);
	}
	catch (std::exception const &e) {
		std::cout << e.what() << std::endl;
	}

	{
		Form f1("f1", 1, 20);
		Form f2("f2", 20, 1);
		Form f3("f3", 150, 40);
		Form f4("f4", 50, 150);
		Form f4_copy(f4);
		Form f3_copy = f3;
		std::cout << f3;
	}

	try {
		Form f1("f1", 10, 20);
		Bureaucrat ololo("lolo", 40);
		ololo.signForm(f1);
	}
	catch (std::exception const &e) {
		std::cout << e.what() << std::endl;
	}

	{
		Form f1("f1", 10, 20);
		Bureaucrat ololo("lolo", 10);
		ololo.signForm(f1);
	}

	{
		Form f1("f1", 10, 20);
		std::cout << f1;
		Bureaucrat ololo("lolo", 5);
		ololo.signForm(f1);
		std::cout << f1;
	}
}
