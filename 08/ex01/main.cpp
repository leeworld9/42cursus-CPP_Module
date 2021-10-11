/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 23:45:24 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/11 23:49:22 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	Span sp_full = Span(2);
	
	sp_full.addNumber(5);
	sp_full.addNumber(8);
	
	try
	{
		sp_full.addNumber(9);	 
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error : " << e.what() <<  std::endl;
	}

	std::cout << "--------------------------------------" << std::endl;

	Span sp_int = Span(7);
	sp_int.addNumber(5);
	sp_int.addNumber(3);
	sp_int.addNumber(242);
	sp_int.addNumber(-815);
	sp_int.addNumber(17);
	sp_int.addNumber(-8925);
	sp_int.addNumber(11);

	std::cout << sp_int.shortestSpan() << std::endl;
	std::cout << sp_int.longestSpan() << std::endl;

	std::cout << "--------------------------------------" << std::endl;

	Span sp_int_range = Span(2);
	sp_int_range.addNumber(2147483647);
	sp_int_range.addNumber(-2147483648);

	std::cout << sp_int_range.shortestSpan() << std::endl;
	std::cout << sp_int_range.longestSpan() << std::endl;

	std::cout << "--------------------------------------" << std::endl;

	Span sp_empty = Span(80);
	
	try 
	{
		std::cout << sp_empty.shortestSpan() << std::endl;
	}
		catch(const std::exception& e)
	{
		std::cerr << "Error : " << e.what() <<  std::endl;
	}

	sp_empty.addNumber(5);

	try
	{
		std::cout << sp_empty.shortestSpan() << std::endl;
	}
		catch(const std::exception& e)
	{
		std::cerr << "Error : " << e.what() <<  std::endl;
	}

	std::cout << "--------------------------------------" << std::endl;

	Span sp_rand = Span(1000);
	srand((unsigned int)time(NULL));
	try
	{
		for (int i = 0 ; i < 1000 ; i++)
		{
			int r = rand() % 10000;
			sp_rand.addNumber(r);
		}
		std::cout << sp_rand.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error : " << e.what() <<  std::endl;
	}
}
