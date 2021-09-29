/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 18:53:08 by dohelee           #+#    #+#             */
/*   Updated: 2021/09/29 19:28:09 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string replaceLine(std::string line, std::string str1, std::string str2)
{
	std::string result = "";
	std::size_t found = line.find(str1);

	if (found == std::string::npos)
		return (line);
	else
	{
		while (found != std::string::npos)
		{
			std::string front = line.substr(0, found); 
			std::string back = line.substr(found + str1.size(), std::string::npos);
			result = (front + str2 + back);
			line = result;
			found = result.find(str1);
		}
		return (result);
	}
}

void replace(std::string filePath, std::string str1, std::string str2)
{
	std::string data;

	if (str1.compare("") == 0 || str2.compare("") == 0)
	{
		std::cout << "error: String Parametr Must NOT Empty" << std::endl;
		return ;
	}
	std::ifstream openFile(filePath.data());
	if (openFile.is_open()){
		std::string line;
		while (getline(openFile, line)){
			data += (replaceLine(line, str1, str2) + "\n") ;
		}
		openFile.close();
	} 
	else 
	{
		std::cout << "error: File Can't Open" << std::endl;
		return ;
	}
	std::ofstream writeFile((filePath + ".replace").data());
	if( writeFile.is_open() ){
		writeFile << data;
		writeFile.close();
	}
	else 
	{
		std::cout << "error: file can't save" << std::endl;
		return ;
	}
}