/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 01:30:56 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/29 02:36:58 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Sorcerer {
	private:
		Sorcerer();
		std::string name;
		std::string title;
	public:
		// Sorcerer() = delete; for -std=c++11
		Sorcerer(std::string const &name, std::string const &title);
		Sorcerer(Sorcerer const &other);
		Sorcerer &operator=(Sorcerer const &other);
		~Sorcerer();

		std::string getname() const;
		std::string gettitle() const;
		void polymorph(Victim const &victim) const;
};

std::ostream &operator<<(std::ostream &out, Sorcerer const &sorcerer);

#endif
