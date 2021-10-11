/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 00:57:54 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/11 02:20:42 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void iter(T *arr, int len, void (*func)(T&))
{
	for (int i = 0; i < len ; i++)
	{
		func(arr[i]);
	}
}

template <typename T>
void print(T &x)
{ 
	std::cout << x << std::endl;
	return;
}

# endif