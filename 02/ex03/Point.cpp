/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 13:40:22 by dohelee           #+#    #+#             */
/*   Updated: 2021/10/02 19:48:51 by dohelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(Fixed(0)), y(Fixed(0)) { }
Point::Point(const float x,const float y) : x(Fixed(x)), y(Fixed(y)) { }
Point::~Point() { }

Point::Point(const Point& copy) : x(copy.getX()), y(copy.getY())
{
	// x, y는 상수로 생성자에서만 초기화 가능
	// 대입연산자(=)에서는 초기화 방법이 없음, 따라서, (=)가 사용되기 전에 복사생성자에서 멤버이니셜라이즈를 이용하여 초기화 해줌
	// 생성자에서만 멤버이니셜라이즈를 사용할 수 있기 때문이다.
	// 복사 생성자 호출시기 참고 : https://blog.plorence.kr/509
	*this = copy;
}

Point& Point::operator=(const Point& op)
{
	if (this != &op)
		; // -Werror,-Wunused-parameter 에러 방지용
	return (*this);
}

Fixed Point::getX() const
{
	return (this->x);
}

Fixed Point::getY() const
{
	return (this->y);
}
