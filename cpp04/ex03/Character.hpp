#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>
#define EQUIP_QUANTITY 4

class Character : public ICharacter {
	private:
		std::string _name;
		AMateria* _inventory[EQUIP_QUANTITY];
	public:
		Character();
		Character(std::string const &name);
		Character(Character const &other);
		Character const &operator=(Character const &other);
		~Character();

		std::string const & getName() const;
		const AMateria *getInventory(int idx) const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
