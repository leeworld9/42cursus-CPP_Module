/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 09:49:46 by dohelee           #+#    #+#             */
/*   Updated: 2021/09/29 10:39:44 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int n;
	Zombie *zom;
	
	n = 5;
	zom = zombieHorde(5, "zombie");
	for(int i = 0; i < n ; i++)
	{
		zom[i].announce();
	}

	delete[] zom;
}