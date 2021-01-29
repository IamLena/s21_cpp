/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 15:23:33 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/29 16:33:35 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : count(0), units(NULL) {}

Squad::Squad(Squad const &other) {
	this->count = count;
	for (int i = 0 ; i < this->count; i++)
		this->push(other.getUnit(i)->clone());
}

Squad &Squad::operator=(Squad const &other) {
	this->count = count;
	if (this->units)
		delete[] this->units;
	for (int i = 0 ; i < this->count; i++)
		this->push(other.getUnit(i)->clone());
	return (*this);
}

Squad::~Squad() {
	for (int i = 0; i < this->count; i++)
		delete this->getUnit(i);
	delete[] this->units;
}

int Squad::getCount() const {
	return this->count;
}

ISpaceMarine* Squad::getUnit(int n) const {
	if (!this->units)
		return NULL;
	if (n < 0 || n >= this->count)
		return NULL;
	return this->units[n];
}

int Squad::exists(ISpaceMarine* newunit) {
	if (this->count == 0 || this->units == NULL)
		return 0;
	for (int i = 0 ; i < this->count; i++)
		if (this->units[i] == newunit)
			return 1;
	return 0;
}

int Squad::push(ISpaceMarine* newunit) {
	if (newunit && !this->exists(newunit))
	{
		ISpaceMarine **tmp = new ISpaceMarine*[this->count + 1];
		for (int i = 0 ; i < this->count; i++)
			tmp[i] = this->getUnit(i);
		tmp[this->count] = newunit;
		delete[] this->units;
		this->units = tmp;
		this->count++;
	}
	return (this->count);
}
