/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 20:03:18 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/07 20:41:13 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	//low exception
	Bureaucrat a("test1", 1);
	std::cout << a << std::endl;
	try
	{
		a.gradeUp();
		std::cout << a << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception : " << e.what() << std::endl;
	}

	//high exception
	Bureaucrat b("test2" , 150);
	std::cout << b << std::endl;
	try
	{
		b.gradeDown();
		std::cout << b << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception : " << e.what() << std::endl;
	}

	Bureaucrat c("test3", 50);
	c.gradeUp();
	std::cout << c << std::endl;

}