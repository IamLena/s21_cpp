/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 02:37:58 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/29 02:52:55 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim {
	private:
		Peon();
	public:
		Peon(std::string const &name);
		Peon(Peon const &other);
		Peon &operator=(Peon const &other);
		~Peon();

		void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &out, Peon const &Peon);

#endif
