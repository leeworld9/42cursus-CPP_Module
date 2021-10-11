/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 22:28:33 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/10 15:34:14 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert() {}

Convert::~Convert() {}

Convert::Convert(const Convert& copy)
{
	*this = copy;
}

Convert& Convert::operator=(const Convert& op)
{
	if (this != &op)
	{
		
	}
	return (*this);
}

float Convert::baseFloat(std::string str)
{
	float base;

	try
	{
		if (str.size() == 1)
		{
			if (str[0] >= '0' && str[1] <= '9')
				str[0] -= 48;
			return (static_cast<float>(str[0])); // ex) char -> 'a' 
		}
		base = std::stof(str);
	}
	catch (std::exception &e)
	{
		throw std::runtime_error("Not Convertable");
	}
	return (base);
}

char Convert::toChar(float base)
{
	char value = static_cast<char>(base);

	if (std::isnan(base) 
		|| base == std::numeric_limits<float>::infinity()
		|| base == -std::numeric_limits<float>::infinity()
	)
		throw std::runtime_error("impossible");
	else if (value < 32 || value > 126)
		throw std::runtime_error("Non displayable");
	return (value);
}

int Convert::toInt(float base)
{
	int i = static_cast<int>(base);

	if (std::isnan(base) 
		|| base == std::numeric_limits<float>::infinity()
		|| base == -std::numeric_limits<float>::infinity()
	)
		throw std::runtime_error("impossible");
	return (i);
}

float Convert::toFloat(float base)
{
	return (static_cast<float>(base));
}

double Convert::toDouble(float base)
{
	return (static_cast<double>(base));
}