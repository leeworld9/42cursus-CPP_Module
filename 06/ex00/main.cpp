/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 23:33:40 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/10 15:40:20 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		Convert cv;
		float base;

		try
		{
			base = cv.baseFloat(argv[1]);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
			return (0);
		}

		try
		{
			char c = cv.toChar(base);
			std::cout << "char: '" << c << "'" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "char: " <<  e.what() << std::endl;
		}

		try
		{
			int i = cv.toInt(base);
			std::cout << "int: " << i << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "int: " << e.what() << std::endl;
		}
		
		float f = cv.toFloat(base);
        if (f - (int)f != (float)0)
            std::cout << "float : " << f << "f" << std::endl;
        else
            std::cout << "float : " << f << ".0f" << std::endl;

        double d = cv.toDouble(base);
        if (d - (int)d != (double)0)
            std::cout << "double : " << d << std::endl;
        else
            std::cout << "double : " << d << ".0" << std::endl;
	}
	else
	{
		std::cout << "Usage : ./convert [target]" << std::endl;
	}
}