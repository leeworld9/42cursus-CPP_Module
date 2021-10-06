/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:11:14 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/04 19:27:08 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "[Cat] Default constructor called" << std::endl;
	type = "Cat";
}

Cat::~Cat() 
{
	std::cout << "[Cat] Destructor called" << std::endl;
}

Cat::Cat(const Cat& copy)
{
	std::cout << "[Cat] Copy constructor called" << std::endl;
	*this = copy;
}

Cat& Cat::operator=(const Cat& op)
{
	std::cout << "[Cat] Assignation operator called" << std::endl;
	if (this != &op)
	{
		Animal::operator=(op);
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "[Cat] Meow~~~~" << std::endl;
}