/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 13:33:24 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/29 15:05:01 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion : public Enemy {
	public:
		RadScorpion();
		RadScorpion(int hp, std::string const & type);
		RadScorpion(RadScorpion const &other);
		RadScorpion &operator=(RadScorpion const &other);
		~RadScorpion();
		virtual void takeDamage(int);
};

#endif
