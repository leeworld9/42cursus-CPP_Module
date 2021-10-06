/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:11:14 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/04 19:27:08 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "[WrongCat] Default constructor called" << std::endl;
	type = "WrongCat";
}

WrongCat::~WrongCat() 
{
	std::cout << "[WrongCat] Destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy)
{
	std::cout << "[WrongCat] Copy constructor called" << std::endl;
	*this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat& op)
{
	std::cout << "[WrongCat] Assignation operator called" << std::endl;
	if (this != &op)
	{
		WrongAnimal::operator=(op);
	}
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "[WrongCat] Meow~~~~" << std::endl;
}