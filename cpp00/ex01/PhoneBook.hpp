/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 12:47:16 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/14 14:19:24 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string>
# include <iomanip>

class Contact {
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	login;
		std::string	postal_address;
		std::string	email_address;
		std::string	phone_number;
		std::string	birthday_date;
		std::string	favorite_meal;
		std::string	underwear_color;
		std::string darkest_secret;

		std::string	alignfield(std::string field, int cellwidth);
	public:
		void		fillContact();
		void		printcontact();
		void		printshortinfo(char separator, int cellwidth);
};

class PhoneBook {
	private:
		Contact	contacts[8];
		int		length;
		void	displayContactInfo();
		void	displayContactRowByIndex(int index, char separator, int cellwidth);
		void	printBook();
	public:
		void	addcontact();
		void	findcontact();
};

#endif
