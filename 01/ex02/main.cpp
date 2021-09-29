/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 11:22:07 by dohelee           #+#    #+#             */
/*   Updated: 2021/09/29 11:48:34 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
	reference : https://www.ijemin.com/blog/c-%ED%8F%AC%EC%9D%B8%ED%84%B0-%EC%B0%B8%EC%A1%B0-%EC%97%B0%EC%82%B0%EC%9E%90%EB%8A%94-%EC%AA%BC%EA%B0%9C%EC%84%9C-%EC%9D%B4%ED%95%B4%ED%95%B4%EC%95%BC-%EC%89%BD%EB%8B%A4/
*/

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;
	
	std::cout << "string\t\taddress\t: " << &string << std::endl;
	std::cout << "stringPTR\taddress\t: " << stringPTR << std::endl;
	std::cout << "stringREF\taddress\t: " << &stringREF << std::endl;

	std::cout << "string\t\t: " << string << std::endl;
	std::cout << "stringPTR\t: " << *stringPTR << std::endl;
	std::cout << "stringREF\t: " << stringREF << std::endl;

	std::cout << "---------------------------------" << std::endl;

	string = "changed";
	std::cout << "string\t\taddress\t: " << &string << std::endl;
	std::cout << "stringPTR\taddress\t: " << stringPTR << std::endl;
	std::cout << "stringREF\taddress\t: " << &stringREF << std::endl;
	
	std::cout << "string\t\t: " << string << std::endl;
	std::cout << "stringPTR\t: " << *stringPTR << std::endl;
	std::cout << "stringREF\t: " << stringREF << std::endl;
}