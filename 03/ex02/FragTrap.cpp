/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 22:31:03 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/04 13:18:12 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "[FragTrap] Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "[FragTrap] Constructor called" << std::endl;
	this->setHitPoint(100);
	this->setEnergyPoint(100);
	this->setAttackDamage(30);
}

FragTrap::~FragTrap()
{
	std::cout << "[FragTrap] Destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy)
{
	std::cout << "[FragTrap] Copy constructor called" << std::endl;
	*this = copy;
}

FragTrap& FragTrap::operator=(const FragTrap& op)
{
	std::cout << "[FragTrap] Assignation operator called" << std::endl;
	if (this != &op)
	{
		ClapTrap::operator=(op);
	}
	return (*this);
}

void FragTrap::attack(std::string const & target)
{
	std::cout << "[FragTrap] " << ClapTrap::getName() << " attacks " << target << \
			", causing " << ClapTrap::getAttackDamage() <<" points of damage!" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "[FragTrap] " << ClapTrap::getName() <<  " try positive high fives" << std::endl;
}
