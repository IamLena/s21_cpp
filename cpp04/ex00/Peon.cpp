/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 02:40:17 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/29 02:58:15 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string const &name) : Victim(name) {
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &other) : Victim(other.getname()) {
	std::cout << "Zog zog." << std::endl;
}

Peon &Peon::operator=(Peon const &other){
	this->name = other.getname();
	return (*this);
}

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const {
	std::cout << this->name << " has been turned into a pink pony!" << std::endl;
}

std::ostream &operator<<(std::ostream &out, Peon const &Peon) {
	out << "I'm "<< Peon.getname() << " and I like otters!" << std::endl;
	return (out);
}
