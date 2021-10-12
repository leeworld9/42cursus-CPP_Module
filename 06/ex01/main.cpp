/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 16:24:37 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/12 22:40:36 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

int main()
{
	Data *origin = new Data;
	std::cout << "Data Size : " << sizeof(struct Data) << std::endl;

	origin->s1 = "12345671231";
	origin->s2 = "10987654321";
	std::cout << "origin ptr : " << origin << std::endl;

	uintptr_t raw = serialize(origin);
	Data* data = deserialize(raw);

	std::cout << "S1\t= " << data->s1 << std::endl;
	std::cout << "S2\t= " << data->s2 << std::endl;
	std::cout << "return ptr : " << data << std::endl;
	
    delete data;
}