/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 16:07:35 by ncolomer          #+#    #+#             */
/*   Updated: 2021/01/25 22:19:24 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	this->thoughts = "... nothing ...";
}

void Brain::getThoughts()
{
	std::cout << "Well.. I am thinking about " << this->thoughts << std::endl;
}

std::string Brain::identify(void)
{
	long adr = (long)this;

	std::stringstream ss;
	ss << "0x" << std::uppercase << std::hex << adr;
	return (ss.str());
}
