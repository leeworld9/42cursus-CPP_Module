/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 00:22:12 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/04 15:16:51 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "[ScavTrap] Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "[ScavTrap] Constructor called" << std::endl;
	this->hit_point = 100;
	this->energy_point = 50;
	this->attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ScavTrap] Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	std::cout << "[ScavTrap] Copy constructor called" << std::endl;
	*this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& op)
{
	std::cout << "[ScavTrap] Assignation operator called" << std::endl;
	if (this != &op)
	{
		ClapTrap::operator=(op);
	}
	return (*this);
}

void ScavTrap::attack(std::string const & target)
{
	std::cout << "[ScavTrap] " << this->name << " attacks " << target << \
			", causing " << this->attack_damage <<" points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "[ScavTrap] " << this->name <<  " have enterred in Gate keeper mode" << std::endl;
}
