/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 02:39:41 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/06 21:15:25 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	this->idx = 0;
}

MateriaSource::~MateriaSource() 
{
	int j = this->idx;
	if (j >= 4)
		j = 3;
	for (int i = 0; i <= j ; i++)
	{
		delete this->materia[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	*this = copy;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& op)
{
	int j = this->idx;
	if (j >= 4)
		j = 3;
	if (this != &op)
	{
		this->idx = op.idx;
		for (int i = 0; i <= j ; i++)
		{
			this->materia[i] = op.materia[i];
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (this->idx < 4)
	{
		this->materia[this->idx] = m;
		this->idx++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int j = this->idx;
	if (j >= 4)
		j = 3;
	for (int i = 0; i <= j ; i++)
	{
		if (this->materia[i]->getType().compare(type) == 0)
		{
			return this->materia[i]->clone();
			break ;
		}
	}
	return (0);
}

