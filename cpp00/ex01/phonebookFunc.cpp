/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebookFunc.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 13:16:22 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/14 14:23:31 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	std::string	cmd;
	PhoneBook	book;

	while (cmd != "EXIT")
	{
		std::cout << "enter command: ";
		std::cin >> cmd;
		if (cmd == "ADD")
			book.addcontact();
		else if (cmd == "SEARCH")
			book.findcontact();
		else if (cmd != "EXIT")
			std::cout << "invalid command. please enter ADD, SEARCH or EXIT\n";
	}
	return (0);
}
