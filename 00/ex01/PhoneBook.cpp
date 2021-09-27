/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 18:11:50 by dohelee           #+#    #+#             */
/*   Updated: 2021/09/28 00:13:41 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	cIndex = 0;
	fieldName[0] = "FIRST NAME";
	fieldName[1] = "LAST NAME";
	fieldName[2] = "NICKNAME";
	fieldName[3] = "PHONE NUMBER";
	fieldName[4] = "DARKEST SECRET";
}

void PhoneBook::setContact()
{
	std::string str;
	
	std::cout << "---------------------------------------------" << std::endl;
	if (cIndex == 8)
		cIndex = 0;
	for (int i = 0 ; i < 5 ; i++)
	{
		std::cout << fieldName[i] << " : ";
		std::getline(std::cin, str);
		while (str.compare("") == 0)
		{
			std::cout << "[YOU SHOULD INPUT DATA AGAIN]" << std::endl;
			std::cout << fieldName[i] << " : ";
			std::getline(std::cin, str);
		}
		contact[cIndex].setData(i, str);
		contact[cIndex].setRunning(true);
	}
	cIndex++;
	std::cout << "---------------------------------------------" << std::endl;
}

int PhoneBook::getContact()
{
	std::string str;
	int inputIndex;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|" << std::setw(10) << std::right << "INDEX" << "|";
	std::cout << std::setw(10) << std::right << "FIRST NAME" << "|";
	std::cout << std::setw(10) << std::right << "LAST NAME" << "|";
	std::cout << std::setw(10) << std::right << "NICKNAME" << "|" << std::endl;
	
	for (int i = 0; i < 8 ; i++)
	{
		if (contact[i].getRunning() != false)
		{
			contact[i].getSearchData(i);
		}
	}
	std::cout << "---------------------------------------------" << std::endl;
	
	std::cout << "SELECT INDEX >> ";
	std::getline(std::cin, str);
	std::stringstream(str) >> inputIndex; 
	if (inputIndex >= 1)
	{
		if (contact[inputIndex - 1].getRunning() != false) 
		{
			contact[inputIndex - 1].getDetailData();
		}
		else
		{
			return (0);
		}
	}
	else
	{
		return (0);
	}
	return (1);
}