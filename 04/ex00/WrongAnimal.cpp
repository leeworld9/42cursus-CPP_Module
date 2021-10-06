/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:44:16 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/04 19:17:06 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "[WrongAnimal] Default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() 
{
	std::cout << "[WrongAnimal] Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	std::cout << "[WrongAnimal] Copy constructor called" << std::endl;
	*this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& op)
{
	std::cout << "[WrongAnimal] Assignation operator called" << std::endl;
	if (this != &op)
	{
		this->type = op.type;
	}
	return (*this);
}

void WrongAnimal::setType(std::string type)
{
	this->type = type;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "[WrongAnimal] makeSound() method called" << std::endl;
}