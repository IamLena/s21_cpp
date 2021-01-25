/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 16:07:46 by ncolomer          #+#    #+#             */
/*   Updated: 2021/01/25 22:20:53 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Brain &Human::getBrain()
{
	return (this->brain);
}

std::string Human::identify()
{
	return (this->brain.identify());
}
