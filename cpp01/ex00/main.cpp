/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 18:04:41 by ncolomer          #+#    #+#             */
/*   Updated: 2021/01/25 20:42:01 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheStack(void)
{
	Pony Bob("Bob");
	Bob.sayHi();
}

void ponyOnTheHeap(void)
{
	Pony *Ann;
	Ann = new Pony("Ann");
	Ann->sayHi();
	delete Ann;
}

int main(void)
{
	std::cout << "# ponyOnTheStack:" << std::endl;
	ponyOnTheStack();
	std::cout << "# ponyOnTheHeap:" << std::endl;
	ponyOnTheHeap();
	return (0);
}
