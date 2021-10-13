/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 04:03:06 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/13 15:34:15 by dohelee          ###   ########.fr       */
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
// reference 2 : https://browoo.tistory.com/221
// reference 3 : https://stackoverflow.com/questions/213761/what-are-some-uses-of-template-template-parameters
//※ Template default arguments is can not be used because it is defined in c++11

template <template <class , class> class T>
typename T<int, std::allocator<int> >::iterator easyfind(T<int, std::allocator<int> > &array, int n)
{
    typename T<int, std::allocator<int> >::iterator itpos;
    if ((itpos = std::find(array.begin(), array.end(), n)) != array.end())
        return (itpos);
    else
        throw NotFound();
}

# endif