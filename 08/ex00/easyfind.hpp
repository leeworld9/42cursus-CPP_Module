/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 04:03:06 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/13 03:48:49 by dohelee          ###   ########.fr       */
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

// reference : https://browoo.tistory.com/221

template <class T>
typename T::iterator easyfind(T& array, int n)
{
	typename T::iterator itpos;
    if ((itpos = std::find(array.begin(), array.end(), n)) != array.end())
        return (itpos);
    else
        throw NotFound();
}

# endif