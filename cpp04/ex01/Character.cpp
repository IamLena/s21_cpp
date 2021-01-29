/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 13:45:16 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/29 15:18:53 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Posesses 40 AP at creation, loses the AP corresponding to the weapon he has on
// each use, and recovers 10 AP upon each call to recoverAP() , up to a maximum
// of 40. No AP, no attack.


#include "Character.hpp"

Character::Character() : ap(0), name(0), weapon(NULL) {}

Character::Character(std::string const & name) : ap(40), name(name), weapon(NULL) {}

Character::Character(Character const &other) :
	ap(other.ap), name(other.name), weapon(other.weapon) {}

Character const &Character::operator=(Character const &other) {
	this->ap = other.ap;
	this->name = other.name;
	this->weapon = other.weapon;
	return (*this);
}

Character::~Character() {}

void Character::recoverAP() {
	this->ap += 10;
	if (this->ap > 40)
		this->ap = 40;
}

void Character::equip(AWeapon* weapon) {
	this->weapon = weapon;
}

void Character::attack(Enemy* enemy) {
	if (!this->weapon || !enemy)
		return ;
	if (this->ap < this->weapon->getAPCost())
		return ;
	this->ap -= this->weapon->getAPCost();
	std::cout << this->name << " attacks " << enemy->getType()
			<< " with a " << this->weapon->getName() << std::endl;
	this->weapon->attack();
	enemy->takeDamage(this->weapon->getDamage());
	if (enemy->getHP() <= 0)
		delete enemy;
}

std::string const &Character::getName() const {
	return this->name;
}

int const &Character::getAP() const {
	return this->ap;
}
AWeapon *Character::getAWeapon() const {
	return this->weapon;
}

std::ostream &operator<<(std::ostream &out, Character const &character) {
	if (character.getAWeapon())
		out << character.getName() << " has " << \
		character.getAP() << " AP and wields a " << \
		character.getAWeapon()->getName() << std::endl;
	else
		out << character.getName() << " has " << \
		character.getAP() << " AP and is unarmed" << std::endl;
}
