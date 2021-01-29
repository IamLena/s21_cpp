/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 01:38:36 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/29 02:37:14 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string const &name, std::string const &title) {
	this->name = name;
	this->title = title;
	std::cout << this->name << ", " << this->title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &other) {
	this->name = other.name;
	this->title = other.title;
	std::cout << this->name << ", " << this->title << ", is born!" << std::endl;
}

Sorcerer &Sorcerer::operator=(Sorcerer const &other) {
	this->name = other.name;
	this->title = other.name;
	return (*this);
}

Sorcerer::~Sorcerer() {
	std::cout << this->name << ", " \
	<< this->title << ", is dead. Consequences will never be the same!" << std::endl;
}

std::string Sorcerer::getname() const {
	return this->name;
}

std::string Sorcerer::gettitle() const {
	return this->title;
}

void Sorcerer::polymorph(Victim const &victim) const {
	victim.getPolymorphed();
}

std::ostream &operator<<(std::ostream &out, Sorcerer const &sorcerer) {
	out << "I am " << sorcerer.getname() << ", " << sorcerer.gettitle() << ", and I like ponies!" << std::endl;
	return (out);
}
