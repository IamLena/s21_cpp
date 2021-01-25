/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 20:35:49 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/25 20:40:10 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string const name): name(name)
{
	std::cout << "Pony was born! We'll name it " << this->name << "." << std::endl;
}

Pony::~Pony()
{
	std::cout << this->name << " the pony died :C" << std::endl;
}

void	Pony::sayHi()
{
	std::cout << "Hello! I am " << this->name << "! Nice to meet you :)" << std::endl;
}
