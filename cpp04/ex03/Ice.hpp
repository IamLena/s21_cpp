#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include <string>

#include "AMateria.hpp"

class Ice : public AMateria
{
	private:
		std::string _type;
		unsigned int _xp;
	public:
		Ice();
		Ice(std::string const & type);
		Ice(Ice const &other);
		Ice const &operator=(Ice const &other);
		~Ice();

		Ice* clone() const;
		void use(ICharacter& target);
};

#endif
