#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include <string>

#include "AMateria.hpp"

class Cure : public AMateria
{
	private:
		std::string _type;
		unsigned int _xp;
	public:
		Cure();
		Cure(std::string const & type);
		Cure(Cure const &other);
		Cure const &operator=(Cure const &other);
		~Cure();

		Cure* clone() const;
		void use(ICharacter& target);
};

#endif
