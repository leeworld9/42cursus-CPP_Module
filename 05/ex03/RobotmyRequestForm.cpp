/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotmyRequestForm.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 18:53:00 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/08 18:53:01 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotmyRequestForm.hpp"

RobotmyRequestForm::RobotmyRequestForm() {}

RobotmyRequestForm::RobotmyRequestForm(std::string target)
	: Form("RobotmyRequestForm", 72, 45)
{
	this->target = target;
}	

RobotmyRequestForm::~RobotmyRequestForm() {}	

RobotmyRequestForm::RobotmyRequestForm(const RobotmyRequestForm& copy)
{
	*this = copy;
}

RobotmyRequestForm& RobotmyRequestForm::operator=(const RobotmyRequestForm& op)
{
	if (this != &op)
	{
		Form::operator=(op);
	}
	return (*this);
}

void RobotmyRequestForm::action() const
{
	std::cout << "Vvvvvvvrrrrr...vvvvrrr...VVVvvvrrrr...VvvVvvrr..." << std::endl;
	if ((rand() % 2) == 1)
		std::cout << this->target << " has been robotomized successfully 50%" << std::endl;
	else
		std::cout << "The robotization Faild" << std::endl;
}

std::string RobotmyRequestForm::getTarget()
{
	return(this->target);
}