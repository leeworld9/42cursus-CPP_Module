/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 16:24:37 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/10 22:18:14 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

int main()
{
	Data *origin = new Data;
	std::cout << "Data Size : " << sizeof(struct Data) << std::endl;

	//현재 string의 길이는 15까지만 가능, 그 이상될 경우 할당된 메모리가 달라서 수정필요
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