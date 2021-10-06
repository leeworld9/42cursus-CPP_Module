/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 00:30:18 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/05 15:00:17 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "[Brain] Default constructor called" << std::endl;
}

Brain::~Brain() 
{
	std::cout << "[Brain] Destructor called" << std::endl;
}

Brain::Brain(const Brain& copy)
{
	std::cout << "[Brain] Copy constructor called" << std::endl;
	*this = copy;
}

Brain& Brain::operator=(const Brain& op)
{
	std::cout << "[Brain] Assignation operator called" << std::endl;
	if (this != &op)
	{
		for (unsigned long i = 0; i < sizeof(op)/sizeof(std::string) ; i++)
		{
			this->ideas[i] = op.ideas[i];
		}
	}
	return (*this);
}

std::string Brain::getIdea(int i)
{
	return (this->ideas[i]);
}

void Brain::setIdea(int i, std::string idea)
{
	this->ideas[i] = idea;
}
