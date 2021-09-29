/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 19:32:34 by dohelee           #+#    #+#             */
/*   Updated: 2021/09/29 23:20:51 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
	Karen::complainType[0].name = "DEBUG";
	Karen::complainType[0].func = &Karen::debug;
	Karen::complainType[1].name = "INFO";
	Karen::complainType[1].func = &Karen::info;
	Karen::complainType[2].name = "WARNING";
	Karen::complainType[2].func = &Karen::warning;
	Karen::complainType[3].name = "ERROR";
	Karen::complainType[3].func = &Karen::error;
}

Karen::~Karen(void) { }

void Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}
void Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now" << std::endl;
}

void Karen::karenFilter(std::string level)
{
	int i;

	i = 0;
	while (Karen::complainType[i].name.compare(level) != 0 && i <= 3)
		i++;
	switch (i)
	{
		case 0:
			(this->*(Karen::complainType[0].func))();
			std::cout << std::endl;
		case 1:
			(this->*(Karen::complainType[1].func))();
			std::cout << std::endl;
		case 2:
			(this->*(Karen::complainType[2].func))();
			std::cout << std::endl;
		case 3:
			(this->*(Karen::complainType[3].func))();
			std::cout << std::endl;
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}	
}