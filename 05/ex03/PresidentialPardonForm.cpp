/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 18:53:06 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/08 18:53:06 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: Form("PresidentialPardonForm", 25, 5)
{
	this->target = target;
}	

PresidentialPardonForm::~PresidentialPardonForm() {}	

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy)
{
	*this = copy;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& op)
{
	if (this != &op)
	{
		Form::operator=(op);
	}
	return (*this);
}

void PresidentialPardonForm::action() const
{
	std::cout << this->target << " was pardonned by Zafod Beeblebrox." << std::endl;
}

std::string PresidentialPardonForm::getTarget()
{
	return(this->target);
}