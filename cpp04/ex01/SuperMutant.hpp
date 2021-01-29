/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 13:24:40 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/29 15:05:07 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"
# include <iostream>
# include <string>

class SuperMutant : public Enemy {
	public:
		SuperMutant();
		SuperMutant(int hp, std::string const & type);
		SuperMutant(SuperMutant const &other);
		SuperMutant &operator=(SuperMutant const &other);
		~SuperMutant();
		virtual void takeDamage(int);
};

#endif
