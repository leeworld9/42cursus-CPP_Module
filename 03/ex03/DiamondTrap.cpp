/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 00:00:04 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/04 13:19:48 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "[DiamondTrap] Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	std::cout << "[DiamondTrap] Constructor called" << std::endl;
	this->dName = name;
	//FragTrap이 마지막으로 생성됬기때문에 4개 변수 모두 FragTrap 값으로 초기화 됬음
	//때문에, Scavtrap 값으로 초기화 할 값이 있으면 아래 처럼 다시 할당해줘야함.
	this->setEnergyPoint(50); 
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "[DiamondTrap] Destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
{
	std::cout << "[DiamondTrap] Copy constructor called" << std::endl;
	*this = copy;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& op)
{
	std::cout << "[DiamondTrap] Assignation operator called" << std::endl;
	if (this != &op)
	{
		this->dName = op.dName;
		ClapTrap::operator=(op);
	}
	return (*this);
}

void DiamondTrap::attack(std::string const & target)
{
	// 다중상속 시 같은 이름의 멤버함수가 존재한 경우 어느쪽에서 상속 받고는지 모호하기 때문에
	// 아래와 같이 범위연산자(::)로 어떤 클래스에서 정의된 함수를 사용할지 명시해줘야 한다.
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "[DiamondTrap] " << "This DiamondTrap name is " << this->dName << " and This ClapTrap name is " << ClapTrap::getName() << std::endl;
}

// void DiamondTrap::test()
// {
// 	std::cout << "[ClapTrap] Attack Damage    : " << ClapTrap::getAttackDamage() << std::endl;
// 	std::cout << "[ScavTrap] Attack Damage    : " << ScavTrap::getAttackDamage() << std::endl;
// 	std::cout << "[FragTrap] Attack Damage    : " << FragTrap::getAttackDamage() << std::endl;
// 	std::cout << "[DiamondTrap] Attack Damage : " << DiamondTrap::getAttackDamage() << std::endl;

// 	std::cout << "[ClapTrap] Energy Point    : " << ClapTrap::getEnergyPoint() << std::endl;
// 	std::cout << "[ScavTrap] Energy Point    : " << ScavTrap::getEnergyPoint() << std::endl;
// 	std::cout << "[FragTrap] Energy Point    : " << FragTrap::getEnergyPoint() << std::endl;
// 	std::cout << "[DiamondTrap] Energy Point : " << DiamondTrap::getEnergyPoint() << std::endl;
// }