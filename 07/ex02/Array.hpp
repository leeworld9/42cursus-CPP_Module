/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 04:02:28 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/12 23:11:37 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<class T>
class Array
{
	private:
		T*				arr;
		unsigned int	array_size;
	public:
		Array()
		{
			arr = new T[0]();
			array_size = 0;
		};

		Array(unsigned int n)
		{
			arr = new T[n]();
			array_size = n;
		};

		virtual ~Array()
		{
			delete [] arr;
		};

		Array(const Array& copy)
		{
			*this = copy;
		};

		Array& operator=(const Array& op)
		{
			if (this != &op)
			{
				this->arr = new T[op.size()]();
				this->array_size = op.size();
				for (unsigned int i = 0; i < op.size(); i++)
				{
					this->arr[i] = op.arr[i];
				}
			}
            return (*this);
		};

		T& operator[](unsigned int i)
		{
			if (i > this->size() - 1)
				throw ArrayException();
			else
				return (this->arr[i]);
		};

		unsigned int size(void) const
		{
			return (this->array_size);
		};

		class ArrayException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{ 
					return ("Array index out of bound exception");
				};
		};
};


# endif