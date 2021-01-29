/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 13:05:55 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/29 13:32:31 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy() : hp(0), type("") {}

Enemy::Enemy(int hp, std::string const & type) : hp(hp), type(type) {}

Enemy::Enemy(Enemy const &other) : hp(other.getHP()), type(other.getType()) {}

Enemy &Enemy::operator=(Enemy const &other) {
	this->hp = other.getHP();
	this->type = other.getType();
	return (*this);
}

Enemy::~Enemy() {}

std::string const &Enemy::getType() const {
	return this->type;
}

int Enemy::getHP() const {
	return this->hp;
}

void Enemy::takeDamage(int hp) {
	if (this->hp > 0 && hp > 0)
		this->hp -= hp;
}
