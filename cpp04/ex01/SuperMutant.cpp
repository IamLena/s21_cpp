/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 13:26:58 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/29 15:03:50 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(int hp, std::string const & type) : Enemy(hp, type) {
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &other) : Enemy (other.getHP(), other.getType()) {
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant &SuperMutant::operator=(SuperMutant const &other) {
	*this = other;
	return (*this);
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh...";
}

void SuperMutant::takeDamage(int hp) {
	if (this->hp > 0 && hp > 3)
		this->hp = this->hp - hp + 3;
}
