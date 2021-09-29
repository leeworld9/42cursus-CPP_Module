/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 13:36:06 by dohelee           #+#    #+#             */
/*   Updated: 2021/09/29 16:19:58 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
	:weapon(NULL)
{
	this->name = name;
}

HumanB::~HumanB() {};

void HumanB::setWeapon(const Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack()
{
	if (weapon)
	{
		std::cout << this->name << " is attacked with " << weapon->getType() << std::endl; 
	}
	else
	{
		std::cout << this->name << " has no weapon"<< std::endl; 
	}
	
}