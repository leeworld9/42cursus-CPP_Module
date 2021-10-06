/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:44:16 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/04 19:17:06 by dohelee          ###   ########.fr       */
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
		this->type = op.type;
	}
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

void Animal::makeSound() const
{
	std::cout << "[Animal] makeSound() method called" << std::endl;
}