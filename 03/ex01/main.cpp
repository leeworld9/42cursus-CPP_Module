/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 23:40:26 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/03 21:56:44 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap c1("TESTUSER1");

	c1.attack("TESTUSER2");
	c1.beRepaired(5);
	c1.takeDamage(5);

	c1.guardGate();
}