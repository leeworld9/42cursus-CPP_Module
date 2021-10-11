/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 16:10:33 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/10 22:06:47 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZAION_HPP
# define SERIALIZAION_HPP

# include <iostream>

/*
'Linux(ubuntu)' 와 'Mac'에서의 std::string의 처리가 다름
ex)
    Linux : sizeof(std::string) => 32 bytes
    Mac   : sizeof(std::string) => 24 bytes
*/

struct Data 
{
	std::string s1;
	std::string s2;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

# endif