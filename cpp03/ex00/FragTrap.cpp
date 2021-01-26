/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 14:08:57 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/26 17:27:50 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "default constructor" << std::endl;
	this->hit_points = 100;
	this->max_hit_points = 100;
	this->energy_points = 100;
	this->max_energy_points = 100;
	this->level = 1;
	this->name = "unknown";
	this->melee_attack_damage = 30;
	this->ranged_attack_damage = 20;
	this->armor_damage_reduction = 5;
}

FragTrap::FragTrap(std::string const &name) {
	std::cout << "with name constructor" << std::endl;
	this->hit_points = 100;
	this->max_hit_points = 100;
	this->energy_points = 100;
	this->max_energy_points = 100;
	this->level = 1;
	this->name = name;
	this->melee_attack_damage = 30;
	this->ranged_attack_damage = 20;
	this->armor_damage_reduction = 5;
}

FragTrap::FragTrap(FragTrap const &other) {
	std::cout << "copy constructor" << std::endl;
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

FragTrap &FragTrap::operator=(FragTrap const &other) {
	std::cout << "assign operator" << std::endl;
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

FragTrap::~FragTrap() {
	std::cout << "destructor" << std::endl;
}

void FragTrap::rangedAttack(std::string const & target) {
	std::cout	<< "FR4G-TP " << this->name \
				<< " attacks " << target << " at range, causing " \
				<< this->ranged_attack_damage << " points of damage!" << std::endl;
}
void FragTrap::meleeAttack(std::string const & target) {
	std::cout	<< "FR4G-TP " << this->name \
				<< " melee attacks " << target << ", causing " \
				<< this->melee_attack_damage << " points of damage!" << std::endl;
}
void FragTrap::takeDamage(unsigned int amount) {
	this->hit_points = this->hit_points - amount + this->armor_damage_reduction;
	if (this->hit_points < 0)
		this->hit_points = 0;
	std::cout	<< "FR4G-TP " << this->name \
				<< " takes damage of " << amount << " points, causing it having " \
				<< this->hit_points << " hit points now!" << std::endl;
}
void FragTrap::beRepaired(unsigned int amount) {
	this->hit_points += amount;
	if (this->hit_points > this->max_hit_points)
		this->hit_points = this->max_hit_points;
	std::cout	<< "FR4G-TP " << this->name \
				<< " was repaired on " << amount << " points, causing it having " \
				<< this->hit_points << " hit points now!" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
	if (this->energy_points < 25)
		std::cout << "FR4G-TP " << this->name << " doesn't have enough energy." << std::endl;
	else
	{
		this->energy_points -= 25;
		std::string attacks[5] = {"soup", "giggles", "mortgage", "deadlines", "papper"};
		std::cout	<< "FR4G-TP " << this->name \
					<< " attacks " << target \
					<< " with " << attacks[rand() % 5] << ", causing " \
					<< ((rand() % this->melee_attack_damage) + 1) << " points of damage!" << std::endl;
		std::cout << "FR4G-TP " << this->name << " has " << this->energy_points << " of energy now." << std::endl;
	}
}
