/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 13:16:22 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/25 20:25:06 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	std::string	cmd;
	PhoneBook	book;

	while (1)
	{
		std::cout << "enter command: ";
		std::cin >> cmd;
		if (cmd == "ADD")
			book.addcontact();
		else if (cmd == "SEARCH")
			book.findcontact();
		else if (cmd == "EXIT")
			break;
		else
			std::cout << "invalid command. please enter ADD, SEARCH or EXIT\n";
	}
	return (0);
}
