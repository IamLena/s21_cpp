#include "Character.hpp"

Character::Character() : _name("") {
	for (int i = 0; i < EQUIP_QUANTITY; i++)
		this->_inventory[i] = NULL;
}

Character::Character(std::string const &name) : _name(name) {
	for (int i = 0; i < EQUIP_QUANTITY; i++)
		this->_inventory[i] = NULL;
}

Character::Character(Character const &other) {
	this->_name = other.getName();
	for (int i = 0; i < EQUIP_QUANTITY; i++)
		this->_inventory[i] = other.getInventory(i)->clone();
}

Character const &Character::operator=(Character const &other) {
	this->_name = other.getName();
	for (int i = 0; i < EQUIP_QUANTITY; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		this->_inventory[i] = other.getInventory(i)->clone();
	}
	return (*this);
}

Character::~Character() {
	for (int i = 0; i < EQUIP_QUANTITY; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
}

std::string const & Character::getName() const {
	return this->_name;
}

const AMateria *Character::getInventory(int idx) const {
	if (idx < 0 || idx >= EQUIP_QUANTITY)
		return NULL;
	return (this->_inventory[idx]);
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < EQUIP_QUANTITY; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx) {
	if (idx < 0 || idx >= EQUIP_QUANTITY)
		return;
	if (this->_inventory[idx])
		this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx >= EQUIP_QUANTITY)
		return;
	if (this->_inventory[idx])
	{
		this->_inventory[idx]->use(target);
	}
}
