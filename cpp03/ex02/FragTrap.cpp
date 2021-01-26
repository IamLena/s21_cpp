/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 14:08:57 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/26 18:13:53 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "FragTrap default constructor" << std::endl;
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

FragTrap::FragTrap(std::string const &name) : ClapTrap(name) {
	std::cout << "with name FragTrap constructor" << std::endl;
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
	std::cout << "copy FragTrap constructor" << std::endl;
	*this = other;
}

FragTrap &FragTrap::operator=(FragTrap const &other) {
	std::cout << "assign FragTrap operator" << std::endl;
	*this = other;
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor" << std::endl;
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
