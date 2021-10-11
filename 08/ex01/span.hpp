/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:00:23 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/11 22:39:05 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <iterator>
# include <algorithm>

class Span
{
	private:
		std::vector<int> vec;
		unsigned int size;
	public:
		Span(unsigned int size);
		virtual ~Span();
		Span(const Span& copy);
		Span& operator=(const Span& op);

		void addNumber(int number);
		long long shortestSpan();
		long long longestSpan();

		class SpanFull : public std::exception
		{
			virtual const char* what() const throw()
			{ 
				return ("Span is full."); 
			}
		};

		class CantSpan : public std::exception
		{
			virtual const char* what() const throw()
			{ 
				return ("Span have not enough values to do a span."); 
			}
		};
};

# endif