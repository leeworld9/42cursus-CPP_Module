/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 04:46:21 by dohelee           #+#    #+#             */
/*   Updated: 2021/09/28 00:24:02 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook pb;
	std::string	cmd;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "AVAILABLE COMMAND : ADD, SEARCH, EXIT" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (true)
	{
		std::cout << "INPUT COMMAND >> ";
		std::getline(std::cin, cmd).eof();
		while (cmd.compare("") == 0)
		{
			std::cout << "INPUT COMMAND >> ";
			std::getline(std::cin, cmd);
		}
		if (cmd.compare("EXIT") == 0)
		{
			std::cout << "[EXIT]" << std::endl;
			break ;
		}
		else if (cmd.compare("ADD") == 0)
		{
			pb.setContact();
		}
		else if (cmd.compare("SEARCH") == 0)
		{
			if (pb.getContact() == 0)
			{
				std::cout << "[UNAVAILABLE INDEX]" << std::endl;
				break ;
			}
		}
		else
		{
			std::cout << "[UNAVAILABLE COMMAND]" << std::endl;
			break ;
		}
	}
	return (0);
}