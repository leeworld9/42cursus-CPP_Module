/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:11:14 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/04 19:27:12 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "[Dog] Default constructor called" << std::endl;
	type = "Dog";
}

Dog::~Dog() 
{
	std::cout << "[Dog] Destructor called" << std::endl;
}

Dog::Dog(const Dog& copy)
{
	std::cout << "[Dog] Copy constructor called" << std::endl;
	*this = copy;
}

Dog& Dog::operator=(const Dog& op)
{
	std::cout << "[Dog] Assignation operator called" << std::endl;
	if (this != &op)
	{
		Animal::operator=(op);
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "[Dog] Bowwow! Bowwow!" << std::endl;
}