/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 22:47:07 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/10 23:38:30 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "utils.hpp"

Base * generate(void)
{
	srand((unsigned int)time(NULL));
	int i = rand() % 3;
	if (i == 0)
		return (new A());
	else if (i == 1)
		return (new B());
	else
		return (new C());
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	} 
	catch(std::exception &e) {}

	try
	{
		B b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	} 
	catch(std::exception &e) {}

	try
	{
		C c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return ;
	} 
	catch(std::exception &e) {}
}
