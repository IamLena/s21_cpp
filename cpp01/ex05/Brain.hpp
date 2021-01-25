/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 22:13:44 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/25 22:18:57 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
# include <string>

# include <sstream>
# include <iomanip>

class Brain
{
	private:
		std::string	thoughts;
	public:
		Brain();

		void getThoughts(void);
		std::string identify(void);
};

#endif
