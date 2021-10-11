/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 23:44:46 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/11 02:14:36 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

/*
	기본적으로 C++에선 source file에선 template 형태의 함수를 가질 수 없다고 한다. 따라서 헤더에서 정의
	-> http://shumin.co.kr/c-undefined-reference-to-template/
*/

template <typename T>
void swap(T& a, T& b)
{
	T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T min(T a, T b)
{
	if (a >= b)
		return (b);
	else
		return (a);
}

template <typename T>
T max(T a, T b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}

# endif