/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 13:09:53 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/14 14:24:43 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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
	std::cout << "first_name: " << std::endl;
	std::cout << this->first_name;
	std::cout << "last_name: " << std::endl;
	std::cout << this->last_name;
	std::cout << "nickname: " << std::endl;
	std::cout << this->nickname;
	std::cout << "login: " << std::endl;
	std::cout << this->login;
	std::cout << "postal_address: " << std::endl;
	std::cout << this->postal_address;
	std::cout << "email_address: " << std::endl;
	std::cout << this->email_address;
	std::cout << "phone_number: " << std::endl;
	std::cout << this->phone_number;
	std::cout << "birthday_date: " << std::endl;
	std::cout << this->birthday_date;
	std::cout << "favorite_meal: " << std::endl;
	std::cout << this->favorite_meal;
	std::cout << "underwear_color: " << std::endl;
	std::cout << this->underwear_color;
	std::cout << "darkest_secret: " << std::endl;
	std::cout << this->darkest_secret;
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

void	PhoneBook::displayContactInfo() {
	int index;
	std::cout << "Enter index of a contact: ";
	std::cin >> index;
	if (index <= 0 || index > this->length)
		std::cout << "Index out of range\n";
	else
		this->contacts[index - 1].printcontact();
}

void	PhoneBook::displayContactRowByIndex(int index, char separator, int cellwidth) {
	std::cout << std::setw(cellwidth) << index;
	contacts[index - 1].printshortinfo(separator, cellwidth);
}

void	PhoneBook::printBook() {
	int cellwidth = 10;
	std::cout << std::setw(cellwidth) << "index" << "|" << \
	std::setw(cellwidth) << "first name" << "|" << \
	std::setw(cellwidth) << "last name" << "|" <<
	std::setw(cellwidth) << "nickname" << "|" << std::endl;
	int index = 0;
	while (index < this->length)
	{
		displayContactRowByIndex(index + 1, '|', 10);
		index++;
	}
}

void	PhoneBook::addcontact()
{
	if (length == 8)
		std::cout << "PhoneBook is fulled\n";
	else
	{
		Contact newContact;
		newContact.fillContact();
		contacts[length] = newContact;
		length++;
	}
}

void	PhoneBook::findcontact()
{
	if (this->length == 8)
	{
		std::cout << "Phonebook is empty\n";
		return;
	}
	this->displayContactInfo();
	this->printBook();
}
