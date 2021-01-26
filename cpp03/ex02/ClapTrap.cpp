/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:00:20 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/26 18:02:21 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap default constructor" << std::endl;
	this->hit_points = 0;
	this->max_hit_points = 0;
	this->energy_points = 0;
	this->max_energy_points = 0;
	this->level = 0;
	this->name = "unknowm";
	this->melee_attack_damage = 0;
	this->ranged_attack_damage = 0;
	this->armor_damage_reduction = 0;
}

ClapTrap::ClapTrap(std::string const &name) {
	std::cout << "with name ClapTrap constructor" << std::endl;
	this->hit_points = 0;
	this->max_hit_points = 0;
	this->energy_points = 0;
	this->max_energy_points = 0;
	this->level = 0;
	this->name = name;
	this->melee_attack_damage = 0;
	this->ranged_attack_damage = 0;
	this->armor_damage_reduction = 0;
}

ClapTrap::ClapTrap(ClapTrap const &other) {
	std::cout << "copy ClapTrap constructor" << std::endl;
	this->hit_points = other.hit_points;
	this->max_hit_points = other.max_hit_points;
	this->energy_points = other.energy_points;
	this->max_energy_points = other.max_energy_points;
	this->level = other.level;
	this->name = other.name;
	this->melee_attack_damage = other.melee_attack_damage;
	this->ranged_attack_damage = other.ranged_attack_damage;
	this->armor_damage_reduction = other.armor_damage_reduction;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other) {
	std::cout << "assign ClapTrap operator" << std::endl;
	this->hit_points = other.hit_points;
	this->max_hit_points = other.max_hit_points;
	this->energy_points = other.energy_points;
	this->max_energy_points = other.max_energy_points;
	this->level = other.level;
	this->name = other.name;
	this->melee_attack_damage = other.melee_attack_damage;
	this->ranged_attack_damage = other.ranged_attack_damage;
	this->armor_damage_reduction = other.armor_damage_reduction;
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor" << std::endl;
}

void ClapTrap::rangedAttack(std::string const & target) {
	std::cout	<< "ClapTrap " << this->name \
				<< " attacks " << target << " at range, causing " \
				<< this->ranged_attack_damage << " points of damage!" << std::endl;
}
void ClapTrap::meleeAttack(std::string const & target) {
	std::cout	<< "ClapTrap " << this->name \
				<< " melee attacks " << target << ", causing " \
				<< this->melee_attack_damage << " points of damage!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount) {
	this->hit_points = this->hit_points - amount + this->armor_damage_reduction;
	if (this->hit_points < 0)
		this->hit_points = 0;
	std::cout	<< "ClapTrap " << this->name \
				<< " takes damage of " << amount << " points, causing it having " \
				<< this->hit_points << " hit points now!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount) {
	this->hit_points += amount;
	if (this->hit_points > this->max_hit_points)
		this->hit_points = this->max_hit_points;
	std::cout	<< "ClapTrap " << this->name \
				<< " was repaired on " << amount << " points, causing it having " \
				<< this->hit_points << " hit points now!" << std::endl;
}
