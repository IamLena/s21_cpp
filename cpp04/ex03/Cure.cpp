#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(std::string const & type) : AMateria(type) {}

Cure::Cure(Cure const &other) : AMateria(other) {}

Cure const &Cure::operator=(Cure const &other) {
	this->_xp = other.getXP();
	return (*this);
}

Cure::~Cure() {}

Cure* Cure::clone() const {
	return new Cure(*this);
}

void Cure::use(ICharacter& target) {
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}
