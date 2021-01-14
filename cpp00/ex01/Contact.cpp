/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 14:56:44 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/14 15:22:09 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::fillContact()
{
	std::cout << "Please enter contact info:\n";
	std::cout << "first_name: ";
	std::cin >> this->first_name;
	std::cout << "last_name: ";
	std::cin >> this->last_name;
	std::cout << "nickname: ";
	std::cin >> this->nickname;
	std::cout << "login: ";
	std::cin >> this->login;
	std::cout << "postal_address: ";
	std::cin >> this->postal_address;
	std::cout << "email_address: ";
	std::cin >> this->email_address;
	std::cout << "phone_number: ";
	std::cin >> this->phone_number;
	std::cout << "birthday_date: ";
	std::cin >> this->birthday_date;
	std::cout << "favorite_meal: ";
	std::cin >> this->favorite_meal;
	std::cout << "underwear_color: ";
	std::cin >> this->underwear_color;
	std::cout << "darkest_secret: ";
	std::cin >> this->darkest_secret;
	std::cout << "Contact is created\n";
}

void	Contact::printcontact()
{
	std::cout << "first_name: ";
	std::cout << this->first_name << std::endl;
	std::cout << "last_name: ";
	std::cout << this->last_name << std::endl;
	std::cout << "nickname: ";
	std::cout << this->nickname << std::endl;
	std::cout << "login: ";
	std::cout << this->login << std::endl;
	std::cout << "postal_address: ";
	std::cout << this->postal_address << std::endl;
	std::cout << "email_address: ";
	std::cout << this->email_address << std::endl;
	std::cout << "phone_number: ";
	std::cout << this->phone_number << std::endl;
	std::cout << "birthday_date: ";
	std::cout << this->birthday_date << std::endl;
	std::cout << "favorite_meal: ";
	std::cout << this->favorite_meal << std::endl;
	std::cout << "underwear_color: ";
	std::cout << this->underwear_color << std::endl;
	std::cout << "darkest_secret: ";
	std::cout << this->darkest_secret << std::endl;
}

std::string 	Contact::alignfield(std::string field, int cellwidth)
{
	if ((int)field.size() > cellwidth)
		return (field.substr(0, cellwidth - 1) + ".");
	else
		return (std::string(cellwidth - field.size(), ' ') + field);
}

void	Contact::printshortinfo(char separator, int cellwidth)
{
	std::cout << \
	separator << alignfield(this->first_name, cellwidth) << \
	separator << alignfield(this->last_name, cellwidth) << \
	separator << alignfield(this->nickname, cellwidth) << \
	separator << std::endl;
}
