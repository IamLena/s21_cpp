/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 02:21:38 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/29 02:58:33 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string const &name) {
	this->name = name;
	std::cout << "Some random victim called "<< this->name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const &other) {
	this->name = other.name;
	std::cout << "Some random victim called "<< this->name << " just appeared!" << std::endl;
}

Victim &Victim::operator=(Victim const &other) {
	this->name = other.name;
	return (*this);
}

Victim::~Victim() {
	std::cout << "Victim " << this->name << " just died for no apparent reason!" << std::endl;
}

std::string Victim::getname() const {
	return this->name;
}

void Victim::getPolymorphed() const {
	std::cout << this->name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream &operator<<(std::ostream &out, Victim const &victim) {
	out << "I'm "<< victim.getname() << " and I like otters!" << std::endl;
	return (out);
}
