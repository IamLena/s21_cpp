/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 22:03:28 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/25 22:04:44 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string	str = std::string("HI THIS IS BRAIN");
	std::string	*str_ptr = &str;
	std::string	&str_ref = str;
	std::cout << "str:\t\t" << str << std::endl;
	std::cout << "ptr_str:\t" << *str_ptr << std::endl;
	std::cout << "ref_str:\t" << str_ref << std::endl;
	return (0);
}

