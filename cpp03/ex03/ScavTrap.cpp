/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 17:33:35 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/26 18:15:40 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap () {
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

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name) {
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
	*this = other;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other) {
	std::cout << "assign ScavTrap operator" << std::endl;
	*this = other;
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor" << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const & target) {
	std::string attacks[4] = {"cleaning", "studying", "workout", "nophoneday"};
	std::cout	<< "ScavTrap " << this->name \
				<< " challenges " << target \
				<< " with " << attacks[rand() % 4] << std::endl;
}
