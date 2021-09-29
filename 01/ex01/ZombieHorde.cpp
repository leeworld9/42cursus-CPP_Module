/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 10:07:33 by dohelee           #+#    #+#             */
/*   Updated: 2021/09/29 10:35:22 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie* zombieHorde(int N, std::string name)
{
	Zombie *zom = new Zombie[N];

	for (int i = 0; i < N ; i++)
	{
		std::stringstream s;
		s << i;
		zom[i].setName(name + s.str()); 
	}
	return (zom);
}