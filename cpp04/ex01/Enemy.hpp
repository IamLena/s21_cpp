/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 13:00:21 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/29 15:17:08 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
	protected:
		int hp;
		std::string type;
	public:
		Enemy();
		Enemy(int hp, std::string const & type);
		Enemy(Enemy const &other);
		Enemy &operator=(Enemy const &other);
		virtual ~Enemy();

		std::string const &getType() const;
		int getHP() const;

		virtual void takeDamage(int);
};

#endif
