/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 12:47:16 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/14 15:10:45 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook {
	private:
		Contact	contacts[8];
		int		length;
		void	displayContactInfo();
		void	displayContactRowByIndex(int index, char separator, int cellwidth);
		void	printBook();
	public:
		PhoneBook();
		void	addcontact();
		void	findcontact();
};

#endif
