/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 09:49:46 by dohelee           #+#    #+#             */
/*   Updated: 2021/09/29 10:04:28 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie* zom1 = newZombie("test1");
	zom1->announce();
	randomChump("test2");
	Zombie* zom2 = newZombie("test3");
	zom2->announce();
	delete zom1;
	delete zom2;
}