/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 23:46:38 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/04 15:17:36 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "[ClapTrap] Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "[ClapTrap] Constructor called" << std::endl;
	this->name = name;
	this->hit_point = 10;
	this->energy_point = 10;
	this->attack_damage = 0;
}

ClapTrap::~ClapTrap() 
{
	std::cout << "[ClapTrap] Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	std::cout << "[ClapTrap] Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& op)
{
	std::cout << "[ClapTrap] Assignation operator called" << std::endl;
	if (this != &op)
	{
		this->name = op.name;
		this->hit_point = op.hit_point;
		this->energy_point = op.energy_point;
		this->attack_damage = op.attack_damage;
	}
	return (*this);
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "[ClapTrap] " << this->name << " attacks " << target << \
			", causing " << this->attack_damage <<" points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "[ClapTrap] " << this->name << " take " << amount << " points of damage!" << std::endl;
	this->hit_point -= amount;
	if (hit_point <= 0)
		this->hit_point = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "[ClapTrap] " << this->name << " is repaired for " << amount << "!" << std::endl;
	this->hit_point += amount;
	if (hit_point >= 10)
		this->hit_point = 10; // 최댓값 10이라고 상정
}