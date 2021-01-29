/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 15:25:38 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/29 16:13:23 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"
# include <iostream>
# include <string>

class Squad : public ISquad{
	private:
		int count;
		ISpaceMarine **units;
		int exists(ISpaceMarine* newunit);
	public:
		Squad();
		Squad(Squad const &other);
		Squad &operator=(Squad const &other);
		~Squad();
		int getCount() const;
		ISpaceMarine* getUnit(int n) const;
		int push(ISpaceMarine* newunit);
};

#endif
