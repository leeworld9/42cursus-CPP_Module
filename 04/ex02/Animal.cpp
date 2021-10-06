/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:44:16 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/05 16:00:52 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "[Animal] Default constructor called" << std::endl;
}

Animal::~Animal() 
{
	std::cout << "[Animal] Destructor called" << std::endl;
}

Animal::Animal(const Animal& copy)
{
	std::cout << "[Animal] Copy constructor called" << std::endl;
	*this = copy;
}

Animal& Animal::operator=(const Animal& op)
{
	std::cout << "[Animal] Assignation operator called" << std::endl;
	if (this != &op)
	{
		if (!this->type.empty())
		{
			this->type = op.type;
		}
	}
	//std::cout << "this\t: in Animal::operator= " << this << std::endl;
	//std::cout << "&op\t: in Animal::operator= "  << &op << std::endl;
	return (*this);
}

void Animal::setType(std::string type)
{
	this->type = type;
}

std::string Animal::getType() const
{
	return (this->type);
}
