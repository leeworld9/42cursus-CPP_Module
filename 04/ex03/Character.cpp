/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 02:37:54 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/06 21:19:04 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	
}

Character::Character(std::string const & name)
{
	this->cnt = 0;
	this->name = name;
}

Character::~Character()
{
	for (int i = 0; i < 4 ; i++)
	{
		if (this->inventory[i] != NULL)
		{
			delete this->inventory[i];
		}
	}
}

Character::Character(const Character& copy)
{
	*this = copy;
}

Character& Character::operator=(const Character& op)
{
	if (this != &op)
	{
		this->name = op.name;
		this->cnt = op.cnt;
		for (int i = 0; i < 4 ; i++)
		{
			if (this->inventory[i] != NULL)
				this->inventory[i] = op.inventory[i]->clone();
		}
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4 ; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			this->cnt++;
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	if (this->inventory[idx] != NULL)
	{
		delete this->inventory[idx];
		this->inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (this->inventory[idx] != NULL)
		this->inventory[idx]->use(target);
	else
		std::cout << "No Materia!!" << std::endl;
}