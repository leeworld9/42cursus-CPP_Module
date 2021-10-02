/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:29:33 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/02 00:47:59 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixed_point = 0;
}

Fixed::Fixed(int inum)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point = inum << this->fractionnal_bits;
}

Fixed::Fixed(float fnum)
{
	std::cout << "Float constructor called" << std::endl;
	// 1 << 8 == 256
	this->fixed_point = (int)roundf(fnum * (1 << this->fractionnal_bits)); 
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	// 연산자(=) 오버로딩 사용
	*this = copy;
}

Fixed& Fixed::operator=(const Fixed& op)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &op)
		this->fixed_point = op.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point);
}

void Fixed::setRawBits(int const raw)
{
	this->fixed_point = raw;
}


float Fixed::toFloat( void ) const
{
	return ((float)this->fixed_point / (1 << this->fractionnal_bits));
}

int Fixed::toInt( void ) const
{
	return (this->fixed_point >> this->fractionnal_bits);
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}