/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 18:39:25 by dohelee           #+#    #+#             */
/*   Updated: 2021/09/27 09:30:10 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	running = false;
}

void Contact::setData(int index, std::string data)
{
	cData[index] = data;
}

void Contact::getSearchData(int index)
{
	std::string str;
	
	std::cout << "|" << std::setw(10) << std::right << index + 1 << "|";
	for (int i = 0; i < 3 ; i++)
	{
		str = cData[i];
		if (str.size() >= 10)
		{
			str = str.substr(0, 9) + ".";
		}
		std::cout << std::setw(10) << std::right << str << "|";
	}
	std::cout << std::endl;
}

void Contact::getDetailData()
{
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "FIRST NAME\t : " << cData[0] << std::endl;
	std::cout << "LAST NAME\t : "  << cData[1] << std::endl;
	std::cout << "NICKNAME\t : " << cData[2] << std::endl;
	std::cout << "PHONE NUMBER\t : " << cData[3] << std::endl;
	std::cout << "DARKEST SECRET\t : "  << cData[4] << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}

void Contact::setRunning(bool running)
{
	this->running = running;
}

bool Contact::getRunning()
{
	return (running);
}