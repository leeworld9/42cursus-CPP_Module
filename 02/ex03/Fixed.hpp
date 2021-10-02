/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:29:07 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/02 16:49:29 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int fixed_point;
		static const int fractionnal_bits = 8;
	public:
		Fixed();
		Fixed(int inum);
		Fixed(float fnum);
		virtual ~Fixed();
		Fixed(const Fixed& copy);

		Fixed& operator=(const Fixed& op);
		
		Fixed operator+(const Fixed& op) const;
		Fixed operator-(const Fixed& op) const;
		Fixed operator*(const Fixed& op) const;
		Fixed operator/(const Fixed& op) const;

		Fixed& operator++(); // post-increment ex) ++a
		Fixed operator++(int); // pre-increment ex) a++
		Fixed& operator--(); // post-decrement ex) --a
		Fixed operator--(int); // pre-decrement ex) a--

		bool operator!=(const Fixed& op) const;
		bool operator>(const Fixed& op) const;
		bool operator>=(const Fixed& op) const;
		bool operator<(const Fixed& op) const;
		bool operator<=(const Fixed& op) const;
		bool operator==(const Fixed& op) const;

		static Fixed& min(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);
		
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream& operator<<(std::ostream &out, const Fixed &fixed);

#endif