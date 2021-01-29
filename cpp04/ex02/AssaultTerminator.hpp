/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 15:56:55 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/29 16:23:12 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"
# include <iostream>

class AssaultTerminator : public ISpaceMarine
{
	private:

	public:
	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const &other);
	AssaultTerminator const &operator=(AssaultTerminator const &other);
	~AssaultTerminator();

	AssaultTerminator* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif
