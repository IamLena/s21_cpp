#include "AMateria.hpp"

AMateria::AMateria() : _type(""), _xp(0) {}

AMateria::AMateria(std::string const & type) : _type(type), _xp(0) {}

AMateria::AMateria(AMateria const &other) : _type(other.getType()), _xp(other.getXP()) {}

AMateria const &AMateria::operator=(AMateria const &other) {
	this->_xp = other.getXP();
	this->_type = other.getType();
	return (*this);
}

AMateria::~AMateria() {}

std::string const & AMateria::getType() const {
	return this->_type;
}

unsigned int AMateria::getXP() const {
	return this->_xp;
}

void AMateria::use(ICharacter& target) {
	this->_xp += 10;
}
