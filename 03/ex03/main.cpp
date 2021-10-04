/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 23:40:26 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/04 13:11:45 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	a("A");
	a.whoAmI();
	{
		DiamondTrap b("B");
		DiamondTrap c("C");

		b.whoAmI();
		c.whoAmI();		

		c.highFivesGuys();
		b.attack("C");
		c.takeDamage(b.getAttackDamage());
		b.attack("C");
		c.takeDamage(b.getAttackDamage());
		b.guardGate();
	}
	DiamondTrap d("D");
	d.whoAmI();
	d = a;
	d.whoAmI();
	//d.test();
	return (0);
}