/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 00:06:29 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/06 17:18:57 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{ 

}

Cure::~Cure() {
	
}

Cure::Cure(const Cure& copy)
{
	*this = copy;
}

Cure& Cure::operator=(const Cure& op)
{
	AMateria::operator=(op);
	return (*this);
}

Cure* Cure::clone() const
{
	Cure *tmp = new Cure();
	return (tmp);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " + target.getName() + "’s wounds *" << std::endl;
}