/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:34:25 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/05 14:58:23 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "[Dog] Default constructor called" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::~Dog() 
{
	std::cout << "[Dog] Destructor called" << std::endl;
	delete brain;
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
		//std::cout << "this\t: in Dog::operator= " << this << std::endl;
		//std::cout << "&op\t: in Dog::operator= "  << &op << std::endl;
		this->brain = new Brain();
		*this->brain = *op.brain;
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "[Dog] Bowwow! Bowwow!" << std::endl;
}

Brain* Dog::getBrain()
{
	return (this->brain);
}