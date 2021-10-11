/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:01:16 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/11 23:49:38 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int size)
{
	this->size = size;
}

Span::~Span() {}

Span::Span(const Span& copy)
{
	*this = copy;
}

Span& Span::operator=(const Span& op)
{
	if (this != &op)
	{
		this->size = op.size;
		this->vec = op.vec;
	}
	return (*this);
}

void Span::addNumber(int number)
{
	if (this->vec.size() < this->size)
	{
		this->vec.push_back(number);
	}
	else
		throw SpanFull();
	std::sort(this->vec.begin(), this->vec.end()); // 정렬
}

long long Span::shortestSpan()
{
	if (this->vec.size() <= 1)
		throw CantSpan();
	else
	{
		// 정렬된 상태에서만 가능한 로직 (addNumber()에서 정렬 실시함)
		long long shortest = (long long)this->vec[1] - (long long)this->vec[0];
		for (int i = 0; i < (int)this->vec.size() - 1; i++)
		{
			if ((long long)this->vec[i + 1] - (long long)this->vec[i] < shortest)
				shortest = (long long)this->vec[i + 1] - (long long)this->vec[i];
		}	
		return (shortest);
	}
}

long long Span::longestSpan()
{
	if (this->vec.size() <= 1)
		throw CantSpan();
	else
	{
		std::vector<int>::iterator min = std::min_element(this->vec.begin(), this->vec.end());
		std::vector<int>::iterator max = std::max_element(this->vec.begin(), this->vec.end());

		long long rtn = (long long)(*min) - (long long)(*max);

		if (rtn < 0)
			rtn *= -1;
		return (rtn);
		
	}
}