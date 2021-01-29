/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 02:20:58 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/29 02:59:21 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim {
	protected:
		Victim();
		std::string name;
	public:
		Victim(std::string const &name);
		Victim(Victim const &other);
		Victim &operator=(Victim const &other);
		~Victim();

		std::string getname() const;
		virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &out, Victim const &Victim);

#endif
