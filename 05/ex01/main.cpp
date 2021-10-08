/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 20:03:18 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/08 02:08:46 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat a("testuser1", 15);
		Form form1("form1", 10, 30);

		std::cout << form1 << std::endl;
		std::cout << a << std::endl;
		
		a.signForm(form1);
		std::cout << form1 << std::endl;
	}
	catch (std::exception e)
	{
		std::cerr << "Exception : " << e.what() << std::endl;
	}
	std::cout << "-------------------------" << std::endl;

	
	try
	{
		Bureaucrat b("testuser2", 5);
		Form form2("form2", 10, 30);

		std::cout << form2 << std::endl;
		std::cout << b << std::endl;
		
		b.signForm(form2);
		std::cout << form2 << std::endl;
	}
	catch (std::exception e)
	{
		std::cerr << "Exception : " << e.what() << std::endl;
	}
}