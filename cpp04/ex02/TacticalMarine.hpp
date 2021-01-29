/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 15:49:56 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/29 16:22:24 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"

#include <iostream>

class TacticalMarine : public ISpaceMarine
{
	private:

	public:
	TacticalMarine();
	TacticalMarine(TacticalMarine const &other);
	TacticalMarine const &operator=(TacticalMarine const &other);
	~TacticalMarine();

	TacticalMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif

