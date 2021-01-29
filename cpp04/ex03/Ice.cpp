#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(std::string const & type) : AMateria(type) {}

Ice::Ice(Ice const &other) : AMateria(other) {}

Ice const &Ice::operator=(Ice const &other) {
	this->_xp = other.getXP();
	return (*this);
}

Ice::~Ice() {}

Ice* Ice::clone() const {
	return new Ice(*this);
}

void Ice::use(ICharacter& target) {
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
