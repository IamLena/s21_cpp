#ifndef AMATERIAL_HPP
# define AMATERIAL_HPP

#include <iostream>
#include <string>

class AMateria;
#include "ICharacter.hpp"

class AMateria
{
	private:
		std::string _type;
		unsigned int _xp;
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria const &other);
		AMateria const &operator=(AMateria const &other);
		virtual ~AMateria();

		std::string const & getType() const; //Returns the materia type
		unsigned int getXP() const; //Returns the Materia's XP
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
