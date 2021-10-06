/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:03:45 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/05 15:00:42 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{

	Animal* animal[10];

	for (int i = 0; i < 10 ; i++)
	{
		if (i % 2 == 0)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
	}

	for (int i = 0; i < 10 ; i++)
	{
		std::cout << "animal[" << i << "] : ";
		animal[i]->makeSound();
	}

	for (int i = 0; i < 10 ; i++)
		delete animal[i];
	
	std::cout << "------------deep copy check--------------" << std::endl;
	Dog basic;
	basic.getBrain()->setIdea(0, "test1");
	std::cout << std::endl;
	{
		Dog tmp = basic;
		tmp.getBrain()->setIdea(0, "test2");
	}
	std::cout << "brain[0] : " << basic.getBrain()->getIdea(0) << std::endl;
}