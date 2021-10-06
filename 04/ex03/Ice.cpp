/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:58:37 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/06 17:19:04 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{

}

Ice::~Ice()
{
	
}

Ice::Ice(const Ice& copy)
{
	*this = copy;
}

Ice& Ice::operator=(const Ice& op)
{
	AMateria::operator=(op);
	return (*this);
}

Ice* Ice::clone() const
{
	Ice *tmp = new Ice();
	return (tmp);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
}