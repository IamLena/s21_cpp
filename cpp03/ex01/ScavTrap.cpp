/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 17:33:35 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/26 17:45:49 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap default constructor" << std::endl;
	this->hit_points = 100;
	this->max_hit_points = 100;
	this->energy_points = 50;
	this->max_energy_points = 50;
	this->level = 1;
	this->name = "unknown";
	this->melee_attack_damage = 20;
	this->ranged_attack_damage = 15;
	this->armor_damage_reduction = 3;
}

ScavTrap::ScavTrap(std::string const &name) {
	std::cout << "ScavTrap with name constructor" << std::endl;
	this->hit_points = 100;
	this->max_hit_points = 100;
	this->energy_points = 50;
	this->max_energy_points = 50;
	this->level = 1;
	this->name = name;
	this->melee_attack_damage = 20;
	this->ranged_attack_damage = 15;
	this->armor_damage_reduction = 3;
}

ScavTrap::ScavTrap(ScavTrap const &other) {
	std::cout << "copy ScavTrap constructor" << std::endl;
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

ScavTrap &ScavTrap::operator=(ScavTrap const &other) {
	std::cout << "assign ScavTrap operator" << std::endl;
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

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor" << std::endl;
}

void ScavTrap::rangedAttack(std::string const & target) {
	std::cout	<< "ScavTrap " << this->name \
				<< " attacks " << target << " at range, causing " \
				<< this->ranged_attack_damage << " points of damage!" << std::endl;
}
void ScavTrap::meleeAttack(std::string const & target) {
	std::cout	<< "ScavTrap " << this->name \
				<< " melee attacks " << target << ", causing " \
				<< this->melee_attack_damage << " points of damage!" << std::endl;
}
void ScavTrap::takeDamage(unsigned int amount) {
	this->hit_points = this->hit_points - amount + this->armor_damage_reduction;
	if (this->hit_points < 0)
		this->hit_points = 0;
	std::cout	<< "ScavTrap " << this->name \
				<< " takes damage of " << amount << " points, causing it having " \
				<< this->hit_points << " hit points now!" << std::endl;
}
void ScavTrap::beRepaired(unsigned int amount) {
	this->hit_points += amount;
	if (this->hit_points > this->max_hit_points)
		this->hit_points = this->max_hit_points;
	std::cout	<< "ScavTrap " << this->name \
				<< " was repaired on " << amount << " points, causing it having " \
				<< this->hit_points << " hit points now!" << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const & target) {
	std::string attacks[4] = {"cleaning", "studying", "workout", "nophoneday"};
	std::cout	<< "ScavTrap " << this->name \
				<< " challenges " << target \
				<< " with " << attacks[rand() % 4] << std::endl;
}
