/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 04:03:06 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/11 20:59:51 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm> //find 사용

class NotFound : public std::exception
{
    virtual const char* what() const throw() { return ("Not found."); }
};

// STL container eneric template
//   ex) Vector -> template < class T, class Alloc = allocator<T> > class vector
// reference 1 : https://www.cplusplus.com/reference/vector/vector/?kw=vector
// reference 2 : https://docs.microsoft.com/ko-kr/cpp/cpp/templates-cpp?view=msvc-160

template <template <typename A, typename B> class T,
		typename A = int, 
		typename B = std::allocator<int>
		>
typename T<A, B>::iterator easyfind(T<A, B> &array, int n)
{
	typename T<A, B>::iterator itpos;
    if ((itpos = std::find(array.begin(), array.end(), n)) != array.end())
        return (itpos);
    else
        throw NotFound();
}

# endif