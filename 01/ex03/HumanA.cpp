/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 13:06:27 by dohelee           #+#    #+#             */
/*   Updated: 2021/09/29 16:13:47 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, const Weapon &weapon)
	:weapon(weapon) // const -> 멤버 이니셜라이즈 사용
{
	this->name = name;
}

HumanA::~HumanA() {};

void HumanA::attack()
{
	std::cout << this->name << " is attacked with " << weapon.getType() << std::endl; 
}